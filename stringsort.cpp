#include<iostream>
using namespace std;
#include<algorithm>
bool cmp(string s1, string s2)
{
	int l1=s1.length();
	int l2=s2.length();
	int m=min(l1,l2);
	int f=0;
	for(int i=0;i<m;i++)
	{
		if(s1[i]!=s2[i])
		{
           f=1;
		   break;
		}
	}
	if(s2>=s1)
	{
	    if(f==0)
	    {
	        return false;
	    }
	    else
	  return true;
	}
	else
	{
     	if(f==0)
     	  {
		     return true;
		   }
	   
	}
	return false;

}


int main() 
{
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
	return 0;
}
