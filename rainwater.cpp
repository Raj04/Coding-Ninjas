#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int n;
    cin>>n;
    int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int cmax=INT_MIN;
	int leftmax[n];
	int rightmax[n];
	for(int i=0;i<n;i++)
	{
      cmax=max(a[i],cmax);
	  leftmax[i]=cmax;
	}
	cmax=INT_MIN;
	for(int i=n-1;i>=0;i--)
	{
		cmax=max(a[i],cmax);
		rightmax[i]=cmax;
	}
	int totalwaterstored=0;
	for(int i=0;i<n;i++)
	{
		totalwaterstored+=min(leftmax[i],rightmax[i])-a[i];
	}
	cout<<totalwaterstored<<endl;
}
