
public class Solution {

	public static int length(LinkedListNode<Integer> head){
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Return output and don't print it.
	 	 * Taking input and printing output is handled automatically.
		*/
      	int length=0;
		LinkedListNode<Integer> temp=head;
      	while(temp!=null){
          length++;
          temp=temp.next;
        }
      	return length;
	}
}
