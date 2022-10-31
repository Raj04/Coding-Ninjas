#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x;
	cin>>x;
	string str=to_string(x);
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		int temp=(int)str[i]-'0';
		if(temp==9 && i==0)
		{
			continue;
		}
		else if(temp<=4)
		{
			continue;
		}
		else
		{
			int temp2=9-temp;
			str[i]=temp2+'0';
		}

	}
	cout<<str<<endl;
}
