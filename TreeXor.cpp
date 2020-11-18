#include<bits/stdc++.h>
using namespace std;
 
#define pfi(a) printf("%d",a);
#define pfl(a) printf("%lld",a);
#define ss second
#define ff first
#define pfin(a) printf("%d\n",a);
#define pfln(a) printf("%lld\n",a);
#define pfis(a) printf("%d ",a);
#define pfls(a) printf("%lld ",a);
#define sfi(a) scanf("%d",&a);
#define sfl(a) scanf("%lld",&a);
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb(a) push_back(a);
#define mp(a,b) make_pair(a,b)
#define ll long long   

const ll mod=1e9+7;

vector<ll> v1[100005];
bool vis[100005]={false};
ll par[100005]={0};
ll child[100005]={0};
ll xr[100005]={0};
void dfs(ll s)
{
    ll i;
    vis[s]=true;
    for(i=0;i<v1[s].size();i++)
    {
        ll k=v1[s][i];
        if(vis[k]==false)
        {
            child[s]++;
            par[k]=s;
            dfs(k);
        }
    }
}

int main()
{
    ll n,k,i;
   sfl(n);
   sfl(k);
    for(i=0;i<n-1;i++)
    {
        ll a,b;
        sfl(a);
        sfl(b);
        v1[a].pb(b);
        v1[b].pb(a);
    }
    dfs(1);
    xr[1]=0;
    for(i=2;i<=n;i++)
    {
        
      //  cout<<i<<" "<<par[i]<<" "<<child[i]<<endl;
      if(child[par[i]]>=k)
      {
          xr[i]=par[i]^xr[par[i]];
      }
      else
      {
          xr[i]=xr[par[i]];
      }
    }
    
    for(i=1;i<=n;i++)
    {
        cout<<xr[i]<<endl;
    }
    
    
    
    
    
    
    
    return 0;
}
