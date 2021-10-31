#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		long long int key;
		cin>>key;
		if(binary_search(a,a+n,key))
		{
			int lb=lower_bound(a,a+n,key)-a;
			int ub=upper_bound(a,a+n,key)-a-1;
			cout<<lb<<" "<<ub<<" "<<endl;
		}
		else
		cout<<"-1"<<" "<<"-1"<<endl;
	}
}
