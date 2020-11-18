import java.util.*;
import java.io.*;

class Node
{
public int exp;
public int coef;
public Node next;
public Node(int x,int y)
{
coef=x;
exp=y;
}
public void displaynode()
{
if(coef<0)
{if(exp==0){System.out.print("+"+coef);}
else{
System.out.print(coef+"x^"+exp);}}
else
{if(exp==0){System.out.print("+"+coef);}
else
{System.out.print("+"+coef+"x^"+exp);}
}
}
}
class linklist
{
public Node first;
public Node last;
public linklist()
{
first=null;
last=null;
}
public void insertlast(int x,int y)
{
Node newNode=new Node(x,y);
if(isempty())
{
first=newNode;
}
else
last.next=newNode;
last=newNode;
}
public boolean isempty()
{
return(first==null);
}
public void display()
{
Node current=first;
while(current!=null)
{
 current.displaynode();
current=current.next;
}
System.out.println();
}
}

class polynomial
{
 public linklist l1;
public polynomial()
{
l1=new linklist();
}
public void insert(int x,int y)
{
l1.insertlast(x,y);
}
public void displaypoly()
{
l1.display();
}

public void add(polynomial poly1,polynomial poly2)
{ 
int x,y;
Node current1=poly1.l1.first;
Node current2=poly2.l1.first;
while(current1!=null && current2!=null)
{
if(current1.exp==current2.exp)
{x=current1.coef+current2.coef;
 y=current1.exp;
current1=current1.next;
current2=current2.next;
}
else if(current1.exp>current2.exp)
{
 x=current1.coef;
y=current1.exp;
current1=current1.next;
}
else
{
 x=current2.coef;
y=current2.exp;
current2=current2.next;
}
l1.insertlast(x,y);
}
while(current1!=null)
{
x=current1.coef;
y=current1.exp;
current1=current1.next;
l1.insertlast(x,y);
}
while(current2!=null)
{
x=current2.coef;
y=current2.exp;
current2=current2.next;
l1.insertlast(x,y);
}
}
}

class polyadd
{
 public static void main(String args[])throws Exception
{
 Scanner sc=new Scanner(System.in);
int n,ex=1,co;
polynomial p1=new polynomial();
polynomial p2=new polynomial();
polynomial p3=new polynomial();
ex=1;
System.out.println("enter the first polynomial");
while(ex!=0)
{
System.out.println("enter coffiecient");
co=sc.nextInt();
System.out.println("enter the exponent");
ex=sc.nextInt();
p1.insert(co,ex);
}
ex=1;
System.out.println("enter the second polynomial");
while(ex!=0)
{
System.out.println("enter coefficent");
co=sc.nextInt();
System.out.println("enter the exponent");
ex=sc.nextInt();
p2.insert(co,ex);
}
System.out.println("1st polynomial");
p1.displaypoly();
System.out.println("2nd polynomial");
p2.displaypoly();
p3.add(p1,p2);
System.out.println("added polynomial is");
p3.displaypoly();
}
}





















































































