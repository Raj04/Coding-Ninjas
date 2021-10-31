#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool ispossible(long long int m,long long int n,long long int k)
{
	return(pow(m,k)<=n);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int s=1;
		long long int e=n;
		long long int ans=0;
		while(s<=e)
		{
			
			long long int m=(s+e)/2;
		if(ispossible(m,n,k))
		{
			ans=m;
          s=m+1;
		}
		else
		{
			e=m-1;
		}
		}
		cout<<ans<<endl;
	}
}
