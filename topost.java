import java.io.*;
import java.util.*;
import java.lang.*;
class stack
{
	char[] arr;
	int top,size;
	stack(int n)
	{
		arr=new char[n];
		top=-1;		
		size=n;
	}
	public void push(char f)
	{
		arr[++top]=f;
		}
	public char pop()
	{
		return arr[top--];
	}
	public char peek()
	{
		return arr[top];
	}
	public boolean isempty()
	{
		return top==-1;
	}
}
class postfix
{
	int pre(char c)
	{
	switch(c)
	{
	case'+':
	case'-':
		return 1;
	case'*':
	case'/':
		return 2;
	}
	return -1;
}

String inftopof(String exp)
{
	String result=new String();
	try{
		stack sk=new stack(exp.length());
		for(int i=0;i<exp.length();i++)
		{
			char c=exp.charAt(i);
			if(Character.isLetterOrDigit(c))
				result+=c;
			else if(c=='(')
				sk.push(c);
			else if(c==')')
			{
				while(!sk.isempty()&&sk.peek()!='(')
					result+=sk.pop();
				if(!sk.isempty()&&sk.peek()!='(')
					System.out.println("INvalid Expression");
				else
					sk.pop();
}
			else
			{
				while(!sk.isempty() && pre(c)<=pre(sk.peek()))
				{
					if(sk.peek()=='(')
						return "InValid Expression";
					result+=sk.pop();
				}
				sk.push(c);

			}
		}
		while (!sk.isempty())
		{
			if(sk.peek()=='(')
				return "Invalid ExPression";
			result+=sk.pop();
		}
		return result;
	}catch (Exception e) {System.out.println("Invalid ExpresSion");}
return "";
}
}
class topost
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		postfix obj=new postfix();
		System.out.println("ENTER INFIX EXPRESSION TO CONVERT TO POSTFIX :");
		String str=sc.nextLine();
                System.out.println("POSTFIX EXPRESSION IS : "+obj.inftopof(str));
	}
}		
			
				

