


#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int t;
	int a[64]={0};
	for(int i=0;i<n;i++)
	{
       cin>>t;
	   int j=0;
	   while(t>0)
	   {
		   int lastbit=t&1;
		   a[j]+=lastbit;
		   j++;
		   t=t>>1;
	   }
       
	}
	int ans=0;
	int k=0;
	for(int i=0;i<64;i++)
	{
		a[i]=a[i]%3;
		if(a[i]==1)
		{
			ans=ans+(1<<k);
		}
		k++;
}
cout<<ans<<endl;
	return 0;
}
