#include<iostream>
using namespace std; 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int ans=0;
		
		long long int n;
		cin>>n;
		while(n>0)
		{
		int j=0;
		long long int k=1;
		while(k<=n)
		{
			
            j++;
		    k=1<<j;
		  
		}
		ans++;
		n=n-(1<<(j-1));
	}
	cout<<ans<<endl;
	}
}

