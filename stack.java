import java.io.*;
import java.util.*;
class Stack
{
 public int capacity;
public int top;
public int arr[];
public Stack(int size)
{capacity=size;
arr=new int[capacity];

top=-1;
}


  void push(int n )
{

if(top<capacity-1)
{
top=top+1;

arr[top]=n;
System.out.println("array aftr push");
int i;
for(i=0;i<=top;i++)
{
System.out.println(arr[i]+"");
}
System.out.println();

}

else
{
System.out.println("stack is full");
}
}
void pop()
{
if(top>=0)
{top--;
System.out.println("array after pop");
int i;
for(i=0;i<=top;i++)
{
System.out.println(arr[i]+"");
}
System.out.println();
}
else
{
System.out.println("stack is empty");
}
}
void extreme()
{
System.out.println(arr[top]);
}


public static void main(String args[])throws Exception
{Scanner sc=new Scanner(System.in);
int x;


System.out.println("enter the size of stack");
x=sc.nextInt();

Stack obj=new Stack(x);


int q;
q=0;
while(q==0)
{
System.out.println("enter 1 for push 2 for pop and 3 for extreme and 4 for exit");

int a,b;


a=sc.nextInt();

switch(a)
{
case 1:
System.out.println("enter element to be pushed");
b=sc.nextInt();
obj.push(b);

break;
case 2:obj.pop();

break;
case 3:obj.extreme();
break;
case 4:q=1;
break;


}
}
}
}









