#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
	
	long long int n=2000000;
	
	int a[n]={0};
	for(long long int i=3;i<n;i=i+2)
	{
			a[i]=1;
    }
	a[0]=0;
    a[2]=1;
	a[1]=0;
	vector<int>seive(n,0);
     seive.push_back(0);
	for(long long int i=3;i<n;i++)
     	{
		if(a[i]==1)
		{
		for(long long int j=i*i;j<n;j=j+i)
		{
			a[j]=0;
		}
		}
	}

	for(long long int i=1;i<n;i++)
	{
	
		    seive[i]=seive[i-1]+a[i];
	}
	int t;
	cin>>t;
	while(t--)
	{
  long long  int p,q;
	cin>>p>>q;
  cout<<seive[q]-seive[p-1]<<endl;
	}
}
