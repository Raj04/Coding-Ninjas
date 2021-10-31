#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int count=0;
		int p=1;
		while(a>0)
		{
          if((a&p)==1)
		  {
			  count++;
		  }
		  a=a>>1;
		}
		cout<<count<<endl;
	}
	return 0;
}
