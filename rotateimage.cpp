/*anticlockwise*/
#include<iostream>
using namespace std;
int main()
{
	int val=1;
	int row;
	int col;
	/*row should be equal to col*/
	cin>>row>>col;
	int a[row][col];
	int b[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
             a[i][j]=val;a
             val++;
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			b[i][j]=a[j][col-1-i];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}





#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		reverse(a[i],a[i]+n);
    }
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>j)
			{
				swap(a[i][j],a[j][i]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
