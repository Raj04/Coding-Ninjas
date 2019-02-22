
public class Solution {
	public static int indexOfNIter(LinkedListNode<Integer> head, int n) {
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Return output and don't print it.
	 	 * Taking input and printing output is handled automatically.
		*/
      LinkedListNode<Integer> temp=head;
      int len=0;
      while(temp!=null){
        if(temp.data==n){
          return len;
        }
        len++;
        temp=temp.next;
      }
      return -1;
	}
}
