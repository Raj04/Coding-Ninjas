#include<iostream>
using namespace std;
int main() {
	int row,col;
	cin>>row>>col;
	int a[row][col];
	int f=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	int key;
	cin>>key;
	int i=row-1;
	int j=0;
	while(i>=0 && j>=0 && i<row && j<col)
	{
     if(a[i][j]==key)
	 {
		 f=1;
		 break;
	 }
	 else if(a[i][j]>key)
	 {
		 i--;
	 }
	 else if(a[i][j]<key)
	 {
		 j++;
	 }
	}
	cout<<f<<endl;
	//return 0;
}
