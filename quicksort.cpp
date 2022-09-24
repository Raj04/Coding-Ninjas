
#include<bits/stdc++.h>
using namespace std;
int partiton(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    while(j<e)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quicksort(int *a,int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partiton(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
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
    quicksort(a,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
