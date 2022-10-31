#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[10000]={-1};
    int end=0;
    int carry=0;
    a[0]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=end;j++)
        {
              int mul=a[j]*i+carry;
              a[j]=mul%10;
              carry=mul/10;
        }
        while(carry!=0)
        {
            a[++end]=carry%10;
            carry=carry/10;
        }
    }
    for(int i=end;i>=0;i--)
    {
        cout<<a[i];
    }
}



