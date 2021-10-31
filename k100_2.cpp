#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    while(j<e)
    {
        if(a[j]<=a[e])
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
        //only one element left;
        return;
    }
    int pivot=partition(a,s,e);
    quicksort(a,s,pivot-1);
    quicksort(a,pivot+1,e);
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

    return 0;
}
