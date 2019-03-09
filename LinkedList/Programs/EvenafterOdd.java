
/*
class LinkedListNode<T> {
	public T data;
	public LinkedListNode<T> next;

	public LinkedListNode(T data) {
		this.setData(data);
		this.next = null;
	}



}
* */
public class Solution {
	public static LinkedListNode<Integer> sortEvenOdd(LinkedListNode<Integer> head) {

        if(head==null){
            return null;
        }
        int flageven=0,flagodd=0;
        LinkedListNode<Integer> oddstart=null;
        LinkedListNode<Integer> oddend=null;
        LinkedListNode<Integer> evenstart=null;
        LinkedListNode<Integer> evenend=null;
        LinkedListNode<Integer> temp=head;
        while(temp!=null){
            if(temp.data%2!=0){
                if(oddstart==null){
                    oddstart=temp;
                    oddend=oddstart;
                }else{
                    oddend.next=temp;
                    oddend=temp;
                }
                flagodd++;
            }else{
                if(evenstart==null){
                    evenstart=temp;
                    evenend=evenstart;
                }else{
                    evenend.next=temp;
                    evenend=temp;
                }
                flageven++;
            }
            temp=temp.next;
        }
        if(flageven!=0 && flagodd!=0){
         
            oddend.next=evenstart;
            evenend.next=null;
            head=oddstart;
           
        }else{//the problem only is when we have only even no or odd no. in the lists
                //so we put flags count if there is a combination of odd and even both flags will increment from 0 to some values
                //if not then either of them will be zero which shows only unique type lists.(0,2,4,6),(1,3,5,7)
            return head;//so we return head as it is no need to change anything
        }
        return head;
	}
}
