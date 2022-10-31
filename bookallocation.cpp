#include<iostream>
using namespace std;
bool succes(int a[],int m,int book,int student)
{
	int pageread=0;
	int count=1;
	for(int i=0;i<book;i++)
	{
	      if(pageread+a[i]<=m)
	        {
	    	pageread=pageread+a[i];
	      }
	    else{
	        count++;
		   if(count>student)
		     {
		       return false;
		     }
		     pageread=a[i];
     	    }
	}
	     
	  return true;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int b;
	    int student;
		cin>>b;
		cin>>student;
		int p[b];
		int tps=0;
		for(int i=0;i<b;i++)
		{
			cin>>p[i];
            tps=tps+p[i];
		}
		int s=p[b-1];
		int e=tps;
	
		int ans;
		while(s<=e)
		{
		 int m=(s+e)/2;
		// cout<<m<<endl;
		if(succes(p,m,b,student))
		{
			ans=m;
           e=m-1;
		}
		else
		{
			s=m+1;
		}
		}
	
			cout<<ans<<endl;
	}

}

