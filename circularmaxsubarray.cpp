#include<bits/stdc++.h>
using namespace std;
int maxcircularsum(int a[],int n,int arrsum)
{
	int minm=10000;
	int cmin=10255;
	int maxm=-10000;
	int cmax=-10255;
	for(int i=0;i<n;i++)
	{
       cmax=max(cmax+a[i],a[i]);
       maxm=max(cmax,maxm);
	}
	for(int i=0;i<n;i++)
	{
     cmin=min(cmin+a[i],a[i]);
	 minm=min(cmin,minm);
	}
	int temp=arrsum-minm;
	if(temp==0)
	{
		return maxm;
	}
	else
	return max(temp,maxm);
}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		int arrsum=0;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			arrsum=arrsum+a[i];
		}
		cout<<maxcircularsum(a,n,arrsum)<<endl;
		t--;
	}
}
