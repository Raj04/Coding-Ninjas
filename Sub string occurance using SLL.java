import java.util.*;
class Node
{
	Node next;
	char data;
	Node( char d)
	{
		next=null;
		data=d;

	}
}
class List
{
	static Node add(char data) 
{ 
    Node newnode = new Node(data); 

    return newnode; 
} 
  
static Node string_to_SLL(String text,  
                            Node head) 
{ 
    head = add(text.charAt(0)); 
    Node curr = head; 
    for(int i=1;i<text.length();i++)  
    { 
        curr.next=add(text.charAt(i)); 
        curr=curr.next; 
    } 
    return head; 
} 
public static void display(Node head)
	{
		Node curr;
		curr=head;
		while(curr!=null)
			{System.out.print(" "+curr.data);curr=curr.next;}
		if(head.next==null)
			System.out.println("empty");
		System.out.println();

	}
	public static void count_occurance(Node head1,Node head2)
	{
		Node curr1=head1;
		Node curr2=head2;
        int c=0;
		while (curr1!=null)
		{
 			if(curr1.data==curr2.data)
 			{ boolean t=true;
 				Node temp1=curr1;Node temp2=curr2;
 				while(temp2!=null)
 				{   
 					if(temp2.data==temp1.data)
 						t=true;
 					else
 						t=false;
 					temp2=temp2.next;temp1=temp1.next;
 					
 				}
 				if(t==true)
 					c++;
 			}
 			curr1=curr1.next;			

		}
		System.out.println("occurance="+c);


	}
public static void main(String[] args)  
{ 
    String s1 = "howarehoarlivahareit"; 
    String s2 = "are"; 
  
    Node head1 =null ; Node head2 =null;
    head1 = string_to_SLL(s1, head1); head2 = string_to_SLL(s2, head2); 

    display(head1);display(head2);
    count_occurance(head1,head2);
    
} 
}
