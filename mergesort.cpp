#include<iostream>
using namespace std;
void merge(int *a,int s, int e)
{
    int m=(s+e)/2;
    int temp[100]={0};
    int i=s;
    int j=m+1;
    int k=s;
    while(i<=m&&j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
           temp[k++]=a[j++];
        }

    }
    while(j<=e)
    {
        temp[k++]=a[j++];

    }
    while(i<=m)
    {
        temp[k++]=a[i++];
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }
}
void mergesort(int *a,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int m=(s+e)/2;
    mergesort(a,s,m);
    mergesort(a,m+1,e);
    merge(a,s,e);
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
    int s=0;
    int e=n-1;
    mergesort(a,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
