
/*************** 
class LinkedListNode<T> {
	T data;
	LinkedListNode<T> next;

	public Node(T data) {
		this.data = data;
	}
}
 ***************/

public class Solution {

	public static void printIth(LinkedListNode<Integer> head, int i){
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Print output and don't return it.
	 	 * Taking input is handled automatically.
		*/
      	if(head==null){
          return;
        }
      	int actualLength=0;
		LinkedListNode<Integer> temp=head;
      	//finding the actual length
      	while(temp!=null){
          actualLength++;
          temp=temp.next;
        }
      	//checking if ith index is greater than length of LL or not
      	if(i>actualLength){
          System.out.println();
          return;
        }
      	//no so putting head to temp again to ith index
      	temp=head;
      	int len=1;//as the first node is the head node itself
      	while(len<=i ){
          temp=temp.next;
          len++;
        }
      	System.out.println(temp.data);
	}
}
