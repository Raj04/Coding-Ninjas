

#include<iostream>
using namespace std;
int main()
{
    int val=1;
	int row;
	int col;
	cin>>row>>col;
	int a[row][col]={0};
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			a[i][j]=val;
			val++;
		}
	}

int sr=0;
int er=row-1;
int sc=0;
int ec=col-1;
while(sr<=er&&sc<=ec)
{
	for(int i=sc;i<=ec;i++)
	{
		cout<<a[sr][i]<<" ";
	}
	sr++;
	for(int i=sr;i<=er;i++)
	{
		cout<<a[i][ec]<<" ";
	}
	ec--;
	if(sr<=er)
	{
	for(int i=ec;i>=sc;i--)
	{
		cout<<a[er][i]<<" ";
	}
	er--;
	}
	if(sc<=ec)
	{
	for(int i=er;i>=sr;i--)
	{
		cout<<a[i][sc]<<" ";
	}
	sc++;
	}
}
}


//// anti clock wise  for N*N matrix



#include<iostream>
using namespace std;
int main()
{
    //int val=1;
    int row;
    int col;
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }

int sr=0;
int er=row-1;
int sc=0;
int ec=col-1;
while(sr<=er&&sc<=ec)
{

    
    for(int i=sr;i<=er;i++)
    {
        cout<<a[i][sc]<<","<<" ";
    }
    sc++;

    
	
    for(int i=sc;i<=ec;i++)
    {
        cout<<a[er][i]<<","<<" ";
    }
    er--;
    
   if(sc<=ec)
   {
	 for(int i=er;i>=sr;i--)
   
    {
        cout<<a[i][ec]<<","<<" ";
    }
    ec--;
}
if(sr<=er)
{
   
    for(int i=ec;i>=sc;i--)
    {
        cout<<a[sr][i]<<","<<" ";
    }
    sr++;
   }
    
}
cout<<"END"<<endl;
}

