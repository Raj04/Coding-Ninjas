#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int sum=0;
	int k=max(n,m);
	int i=n-1;
	int j=m-1;
	int carry=0;
	int temp=0;
	
		if(n>=m)
		{
		    while(k>0)
         	{
		    	if(i>=0 && j>=0)
		     	{
		          temp=(carry+a[i]+b[j]);
		          carry=temp/10;
		          a[i]=temp%10;
		          
		          i--;
		           j--;
		    	}
		
	        	else
	        	{
		        	temp=(carry+a[i]);
		        	carry=temp/10;
                    a[i]=temp%10;
	             	i--;
	          	}
		    	k--;
         	}
            if(carry!=0)
            {
                cout<<carry<<","<<" ";
            }
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<","<<" ";
            }
            cout<<"END";
		    
		}
		
		if(n<m)
		{
		    while(k>0)
         	{
		    	if(i>=0 && j>=0)
		     	{
		          temp=(carry+a[i]+b[j]);
		          b[j]=temp%10;
		          carry=temp/10;
		          i--;
		           j--;
		    	}
		
	        	else
	        	{
		        	temp=(carry+b[j]);
                    b[j]=temp%10;
	            	carry=temp/10;
	             	j--;
	          	}
		    	k--;
         	}
            if(carry!=0)
            {
                cout<<carry<<","<<" ";
            }
            for(int i=0;i<m;i++)
            {
                cout<<b[i]<<","<<" ";
            }
            cout<<"END";
		    
		}
		
		
		

}
