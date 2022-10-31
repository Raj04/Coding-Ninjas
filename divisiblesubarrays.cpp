include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int ans=0;
		long long int n;
		cin>>n;
		long long int a[n]={0};
		long long int f[n]={0};
		f[0]=1;
		long long int sum=0;
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+(a[i]%n);
			sum=sum%n;
			sum=(sum+n)%n;
            f[sum]++;
		}
		for(long long int i=0;i<n;i++)
		{
			long long int m=f[i];
          ans+=((m)*(m-1))/2;
		}
		cout<<ans<<endl;
	}
