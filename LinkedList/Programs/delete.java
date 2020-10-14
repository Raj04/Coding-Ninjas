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
	
//       	if(head==null){
//           return null;
//         }
//       	//FINDING THE LENGTH OF THE LINKEDLIST
//       	LinkedListNode<Integer> temp=head;
//       	int actual_length=0;
//       	while(temp!=null){
//         	temp=temp.next;
//           	actual_length++;
//         }
//       	//we got the actual length of LL 
//       	//now the indexes we have assumed starts from 0 
//       	// for input pattern 1 4 5 -1
// 		//3 
//       	//so 3 is actually out of bound as we have assumed starting index :( as 0
//       	//but actually acc to length wise calcultion it exists so we have to give condition
//         //so that i(to be found) should be in the boundary
//       	if(i>actual_length-1){
//           return head;
//         }	
//       	temp=head;
//       	if(i==0){
//           head=temp.next;
//           return head;
//         }
// 		LinkedListNode<Integer> prev=null;
//       	int len=0;
      
//       	while(len<i){
//           prev=temp;
//           temp=temp.next;
//           len++;
//         }
//       	prev.next=temp.next;
//       	return head;
		if (head == null){
			return head;		/* obviously if head is pointing towards null its final*/
		}
		if (i == 0){
			return head.next;	
		}
		int count = 0 ;		/* making a count that starts from 0 and is updated after every iteration*/
		LinkedListNode<Integer>currHead = head ;
		while(currHead != null && count< i -1){		/*making a while statement stating if currHead is not null & if count is 1 less than the required node then */
		currHead == currHead.next;			/*shift the currHead to the next */
			count++;				/*and increase the count by one*/
		}
		if(currHead == null || currHead.next == null){		/*if statement stating that if currHead is null OR currHead.next is null then return the head*/
			return head;
		}
		currHead.next == currHead.next.next;			/*once the while loop is broken due to currHead pointing null and count is equal to 1 less than the required position*/
		return head;						/*we will not jump to the next node but next to next node to make it head deleting the currHead.next node*/
      	
	}
}
