#include<bits/stdc++.h>
using namespace std;
int main() {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int inc[n]={1};
        int increv[n]={1};
        int maxm=0;
        int maxrevinc=0;
        int maxinc=0;
        int bitonic[n];
        for(int i=1;i<n;i++)
        {
            if(a[i]>=a[i-1])
            {
                inc[i]+=inc[i-1];
                maxinc=max(maxinc,inc[i]);
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=a[i+1])
            {
                increv[i]+=increv[i-1];
                maxrevinc=max(maxrevinc,increv[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            bitonic[i]=inc[i]+increv[i]-1;
            maxm=max(maxm,bitonic[i]);
        }
       /* if(maxm>=maxrevinc && maxm>=maxinc)
        cout<<maxm<<endl;
        else if(maxrevinc>maxm && maxrevinc>maxinc)
        cout<<maxrevinc<<endl;
        else*/
        cout<<maxm<<endl;
}




#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    int inc[n];
    inc[0]=1;
        int increv[n];
        increv[n-1]=1;
        int maxm=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>=a[i-1])
            {
                inc[i]=inc[i-1]+1;
            }
            else
            inc[i]=1;
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=a[i+1])
            {
                increv[i]=increv[i+1]+1;
            }
            else
            increv[i]=1;
        }
        maxm=inc[0]+increv[0]-1;
        for(int i=1;i<n;i++)
        {
        if(inc[i]+increv[i]-1>maxm)
        maxm=inc[i]+increv[i]-1;
        
        }
        cout<<maxm<<endl;
}
}
