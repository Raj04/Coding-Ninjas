#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x=0;
	int a;
	while(n--)
	{
	cin>>a;
    x=x^a;
	}
	cout<<x;
	return 0;
}
