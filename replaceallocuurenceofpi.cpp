#include<iostream>
using namespace std;
void pi_replacer(char* ch,int i)
{
	if(ch[i]=='\0' ||ch[i+1]=='\0')
	{
		//cout<<ch<<endl;
		return;
	}
	if(ch[i]=='p'&& ch[i+1]=='i')
	{int j=i+2;
		while(ch[j]!='\0')
		{
			j++;
		}
		while(j>=i+2)
		{
			ch[j+2]=ch[j];
			j--;
		}
ch[i]='3';
ch[i+1]='.';
ch[i+2]='1';
ch[i+3]='4';
i=i+4;
pi_replacer(ch,i);
	}
	else
	{
		pi_replacer(ch,i+1);
	}
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 char ch[1000];
	cin>>ch;
	pi_replacer(ch,0);
	cout<<ch<<endl;
	}
	return 0;
}
