
/*
class LinkedListNode<T> {
	public T data;
	public LinkedListNode<T> next;

	public LinkedListNode(T data) {
		this.setData(data);
		this.next = null;
	}

	public T getData() {
		return data;
	}

	public void setData(T data) {
		this.data = data;
	}

}
* */
public class solution {
	public static LinkedListNode<Integer> skipMdeleteN(LinkedListNode<Integer> head, int M, int N) {

        LinkedListNode<Integer> temp=head;
        LinkedListNode<Integer> curr=null;
        while(temp!=null){
            int l=M;//for traversing till m nodes
            int i=1;
            while(i<l && temp!=null){
                temp=temp.next;
                i++;
            }
            //two cases can occur
            
            //first case: if temp is null then we are not able to traverse fully lists no need of further operations
            if(temp==null){
                break;
            }
            curr=temp.next;
            int j=1;
            int d=N;//for deleting n nodes
            
            while(curr!=null && j<d){
                curr=curr.next;
                j++;
            }
            //second case: when curr got null then we are not able to traverse and delete all n nodes
            //if we got null we store it into temp i.e we want to delete from where
            if(curr==null){
                temp.next=curr;
                break;
            }
            temp.next=curr.next;
            temp=curr.next;
        }
        return head;
	}
}
