#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(long long int a[],long long int m, long long int n, long long int k)
{
	long long int tlc=0;
	int count=1;
	for(int i=0;i<n;i++)
	{
		if(tlc+a[i]<=m)
		{
			tlc=tlc+a[i];
		}
		else{
			count++;
			if(count>k)
			{
				return false;
			}
			tlc=a[i];
		}
	}
	return true;
}
int main() {
	int n,k,t;
	cin>>n>>k>>t;
	long long int a[n];
	 long long int tsp=0;
	long long int maxm=-10;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		tsp=tsp+a[i];
		maxm=max(maxm,a[i]);
	}
	//sort(a,a+n);
	int s=maxm; 
	 long long int  e=tsp;
	 long long int ans=0;
     while(s<=e)
	 {
		  long long int  m=(s+e)/2;
		 if(ispossible(a,m,n,k))
		 {
			 ans=m;
			 e=m-1;
		 }
		 else
		 {
			 s=m+1;
		 }
	 }
	 cout<<(ans*t)%10000003<<endl;
	
}
