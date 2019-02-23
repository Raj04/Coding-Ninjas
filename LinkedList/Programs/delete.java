/*************** 
 * Following is the Node class already written 
class LinkedListNode<T> {
	T data;
	LinkedListNode<T> next;

	public Node(T data) {
		this.data = data;
	}
}
 ***************/

public class Solution {

	public static LinkedListNode<Integer> deleteIthNode(LinkedListNode<Integer> head, int i){
	
      	if(head==null){
          return null;
        }
      	//FINDING THE LENGTH OF THE LINKEDLIST
      	LinkedListNode<Integer> temp=head;
      	int actual_length=0;
      	while(temp!=null){
        	temp=temp.next;
          	actual_length++;
        }
      	//we got the actual length of LL 
      	//now the indexes we have assumed starts from 0 
      	// for input pattern 1 4 5 -1
		//3 
      	//so 3 is actually out of bound as we have assumed starting index :( as 0
      	//but actually acc to length wise calcultion it exists so we have to give condition
        //so that i(to be found) should be in the boundary
      	if(i>actual_length-1){
          return head;
        }	
      	temp=head;
      	if(i==0){
          head=temp.next;
          return head;
        }
		LinkedListNode<Integer> prev=null;
      	int len=0;
      
      	while(len<i){
          prev=temp;
          temp=temp.next;
          len++;
        }
      	prev.next=temp.next;
      	return head;
      	
	}
}
