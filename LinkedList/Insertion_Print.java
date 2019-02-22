package com;

import java.util.*; 


public class Insertion_Print {

	static Scanner sc=new Scanner(System.in);	
	static Node<Integer> head=null;
	public static void main(String[] args) {

		while(true){
			System.out.println("Enter 1 to insert a new node \n2 to print\nAny other number to exit");
			int x=sc.nextInt();
			if(x==1){
				create();
			}
			else if(x==2){
				print();		
			}
			else{
				break;
			}
		}
	}
	public static void create(){
		
		Integer data=sc.nextInt();
		if(head==null){
			Node<Integer> node1=new Node<Integer>(data);
			head=node1;
//			System.out.println(head);
//			System.out.println(node1);
//			System.out.println(node1.data);
//			System.out.println(node1.next);
			return;
		}
		//creating new node to insert
		Node<Integer> newNode=new Node<Integer>(data);
		Node<Integer> temp=head;
		while(temp.next!=null){
			temp=temp.next;
		}
		temp.next=newNode;
		newNode.next=null;
	}
	public static void print(){
		Node<Integer> temp=head;
		while(temp!=null){
			System.out.println(temp.data);
			temp=temp.next;
		}
	}
}
