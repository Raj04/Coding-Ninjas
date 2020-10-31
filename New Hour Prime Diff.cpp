#include <iostream>
#include <bits/stdc++.h> 
#include <cmath> 


using namespace std;
bool isPrime(int n) 
{  
    if(n<=1) 
        return false; 
    for (int i=2;i<n;i++) 
        if (n%i==0) 
            return false; 
  
    return true; 
} 
  
int main() {
int d,p,n,i,j,f,c,s;f=0;
cin>>d>>p;
n=d/p;c=1;
while(c<=n)
{
 s=c;
for(i=1;i<=p;i++)
{
	if(isPrime(s) && s<=d-n)
	{	s=s+n;}
	else
	break;
}
if(i==p&&isPrime(s))
f++;
c++;
}
cout<<f;
	//code
	return 0;
}
