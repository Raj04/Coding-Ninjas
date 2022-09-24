#include<iostream>
#include<algorithm>
using namespace std;
	void triplet(int a[],int n,int k)
	{
		sort(a,a+n);

        for(int i=0;i<n-2;i++)
		{
			int key2=k-a[i];
             int si=i+1;
			 int j=n-1;
             while(si<j)
			 {
				int s=a[si]+a[j];
				 if(s>key2)
		         {
			      j--;
	          	}
		          else if(s<key2)
		         {
			      si++;
		           }
	        	else if(s==key2)
		          {
                  cout<<a[i]<<", "<<a[si]<<" and "<<a[j]<<endl;
         
                   si++;
                 j--;
              }
		
			 }
		}
	}
	int main()
	{
       int n;
	   cin>>n;
	   int a[n];
	   for(int i=0;i<n;i++)
	   {
		   cin>>a[i];
	   }
	   int key;
	   cin>>key;
	   triplet(a,n,key);
	}
