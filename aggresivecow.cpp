#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(int stall[],int m,int st, int cow)
{
	int lastcow=stall[0];
	int count=1;
	for(int i=1;i<st;i++)
	{
         if(stall[i]-lastcow>=m)
		 {
			 lastcow=stall[i];
			 count++;
		 }
		 if(count==cow)
		 {
			 return true;
		 }
	}
	return false;
}
int main() {
	int st,cow;
	cin>>st>>cow;
	int stall[st];
	for(int i=0;i<st;i++)
	{
       cin>>stall[i];
	}
	sort(stall,stall+st);
	int s=0;
	int e=stall[st-1]-stall[0];
	int ans=0;
	while(s<=e)
	{
		
		int m=(s+e)/2;
		if(ispossible(stall,m,st,cow))
		{
			ans=m;
			s=m+1;
		}
		else
		{
			e=m-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
