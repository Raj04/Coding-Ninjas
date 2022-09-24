#include<iostream>
using namespace std;
int main() {
	int n,p;
	cin>>n>>p;
	int ans=1;
	int temp=n;
	while(p>0)
	{
      if((p&1)>0)
	  {
		  ans=ans*temp;
	  }
	  p=p>>1;
	  temp=temp*temp;
	}
	cout<<ans<<endl;
	return 0;
}
