#include<iostream>
using namespace std;
void gcd(long long int a, long long int b)
{
	int y;
	if(a==0)
	{
	y=b;
	cout<<y<<endl;

	}
	else
	{
	   gcd(b%a,a);
	}
	
}
int main() {
	long long int a,b;
	cin>>a>>b;
     gcd(a,b);
	

}
