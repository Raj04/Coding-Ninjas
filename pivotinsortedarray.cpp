#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s=0;
	int e=n-1;
	int ans=0;
	while(s<=e)
	{
		int m=(s+e)/2;
		if(a[m]>a[m+1]&&a[m]>a[m-1])
		{
			ans=m;
			//cout<<m<<endl;
			break;
		}
		else if(a[m]>a[m+1] && a[m]<a[m-1])
		{
           e=m-1;
		}
		else if(a[m]>a[m-1] && a[m]<a[m+1])
		{
			s=m+1;
		}
		else
		{
		    e=m-1;
		}

	}
	//return 0;
	cout<<ans<<endl;
}
