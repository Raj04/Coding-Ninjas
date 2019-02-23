
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
public class Solution {
	public static int printMiddel(LinkedListNode<Integer> head) {
      
      LinkedListNode<Integer> temp=head;
      int len=1;
      while(temp!=null){
        len++;
        temp=temp.next;
      }
      //if it is even then fine
      //if odd then .5 will lead to ceil value which is actually mid value
      int mid=(int)Math.ceil(len/2);
      int start=1;
      temp=head;
      //System.out.println(temp.data);
      while(start<mid){
        temp=temp.next;
        start++;
      }
      return temp.data;
   //   return -1;

    }
}
