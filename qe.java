import java.util.*;
import java.lang.*;
import java.io.*;
class rev
{
public int arr[];
public int top;
public int size;
static int x;
public rev(int n){
size=n;
arr =new int[size];
top=-1;
}
void push(int j){
if(top<size-1){
top++;
arr[top]=j;
}}
void pop(){
if(top>=0){
x=arr[top];
top--;
}}
public static void main (String[] args) throws IOException
{
int s1,i,tempu;
Scanner sc = new Scanner(System.in);
System.out.println("ENTER SIZE OF STACK");
s1=sc.nextInt();
rev sta= new rev(s1);
rev sta1 = new rev(s1);
System.out.println("ENTER NUMBERS TO BE PUSHED");
for(i=0;i<s1;i++){
System.out.println("ENTER");
tempu=sc.nextInt();
sta.push(tempu);
}
int temp,t1,k,count=1;
for(i=0;i<s1;i++)
{
sta.pop();
temp=x;
for(k=0;k<(s1-count);k++){
sta.pop();
t1=x;
sta1.push(t1);
}
sta.push(temp);
for(k=0;k<(s1-count);k++){
sta1.pop();
t1=x;
sta.push(t1);
}
count++;
}
for(i=0;i<s1;i++)
{
sta.pop();
System.out.println(x);
}}}
