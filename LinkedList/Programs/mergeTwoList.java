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
//only changing of pointers
public class Solution {

	public static LinkedListNode<Integer> mergeTwoList(LinkedListNode<Integer> head1, LinkedListNode<Integer> head2) {
		
        
	    LinkedListNode<Integer> temp,header1,header2,head3;
        header1=head1;
        header2=head2;
        if(header1.data<=header2.data){
            head3=header1;
            temp=head1;
            head1=head1.next;
            temp.next=null;            
        }else{
            head3=header2;
            temp=head2;
            head2=head2.next;
            temp.next=null;
        }
        while(head1!=null && head2!=null){
            if(head1.data<=head2.data){
                temp.next=head1;
                temp=head1;
                head1=head1.next;
                temp.next=null;
            }else{
                temp.next=head2;
                temp=head2;
                head2=head2.next;
                temp.next=null;
            }
        }
        if(head1!=null){
            temp.next=head1;
        }
        if(head2!=null){
            temp.next=head2;
        }
        return head3;    
	}

}
