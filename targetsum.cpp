#include<bits/stdc++.h>
using namespace std;
void pairs(int a[],int n,int k)
{
   sort(a,a+n);
   int i=0;
   int j=n-1;
   while(i<j)
   {
	   int temp=a[i]+a[j];
	   if(temp<k)
	   {
		   i++;
	   }
	   else if(temp>k)
	   {
		   j--;
	   }
	   else{
		   cout<<a[i]<<" and "<<a[j]<<endl;
		   i++;
		   j--;
	   }
   }
}
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
	 cin>>a[i];
 }
 int key;
 cin>>key;
 pairs(a,n,key);
}
