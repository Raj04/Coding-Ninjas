import java.io.*;
import java.util.*;
import java.lang.*;
class stack
{
	int[] arr;
	int top,size;
	stack(int n)
	{
		arr=new int[n];
		top=-1;		
		size=n;
	}
	public void push(int f)
	{
		arr[++top]=f;
		}
	public int pop()
	{
		return arr[top--];
	}
	public int peek()
	{
		return arr[top];
	}
	public boolean isempty()
	{
		return top==-1;
	}
}
class eval
{
	stack sk=new stack(40);
	void evaluate(String exp)
	{try{
		for(int i=0;i<exp.length();i++)
		{
			char s=exp.charAt(i);
			if(Character.isDigit(s))
				sk.push(Integer.parseInt(""+s));
			else
			{
				int val1=sk.pop();
				int val2=sk.pop();
				switch(s)
				{
					case '+':sk.push(val1+val2);
						break;
					case '-':sk.push(val1-val2);
						break;
					case '*':sk.push(val1*val2);
						break;
					case '/':sk.push(val1/val2);
						break;
				}
			}
		}
		System.out.println("Result : "+sk.pop());
	}
	catch (Exception e){System.out.println("Invalid Expression");}
}}
class posteval
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		eval sk=new eval();
		System.out.println("ENTER POSTFIX EXPRESSION");
		String exp=sc.nextLine();
		sk.evaluate(exp);
	}
}
