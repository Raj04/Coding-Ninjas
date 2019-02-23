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
	public static int indexOfNRec(LinkedListNode<Integer> head, int n) {
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Return output and don't print it.
	 	 * Taking input and printing output is handled automatically.
		*/
      //below works for distinct elements
      /* 
      
      	if(head==null){
          return -1;
        }
      	int index=indexOfNRec(head.next,n);
      	if(index==-1){
          if(head.data==n){
            return 0;
          }
        }else if(index>=0){
          return ++index;
        }
     	return -1;
        */
      //we need to return the first matched element index
      //i.e the first occurence
      if(head==null){
        return -1;
      }
      if(head.data==n){
        return 0;
      }
      int index=indexOfNRec(head.next,n);
      if(index>=0){
        return ++index;
      }
      return -1;
	}
}
