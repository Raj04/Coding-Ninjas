/*"Success isn't permanent, failure isn't fatal,
    it's the courage to continue that counts"
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
#include<bits/stdc++.h>
using namespace std;
#define A 1000000007ll
#define D 100000000000000ll
#define B 998244353ll
#define C 1000000000000000000ll
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
#define F first
#define S second
#define vi vector<ll>
#define vc vector<char>
#define endl "\n"
#define deci fixed<<setprecision(9)
const ll mod = 1e9 + 9;
#define N 1000005
ll arr[N + 1];
vector<ll> v1[N + 1];
ll parent[N + 1][25];
void dfs(ll s, ll par)
{
    ll i;
    parent[s][0] = par;
    for (i = 0; i < v1[s].size(); i++)
    {
        ll k = v1[s][i];

        if (k != par)
        {
            dfs(k, s);
        }
    }
}
void twotoithparent(ll n)
{
    ll i, j;
    for (i = 1; i < 20; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (parent[j][i - 1] != -1)
            {
                parent[j][i] = parent[parent[j][i - 1]][i - 1];
            }
        }
    }
}
ll kthparent(ll k, ll u)
{
    while (k > 0)
    {
        ll i = log2(k);
        if (parent[u][i] != -1)
        {
            u = parent[u][i];
            k = k - (1 << i);
        }
        else
        {
            return -1;
            break;
        }
    }
    return u;
}
int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(parent, -1, sizeof(parent));
    ll n, k;
    sfl(n);
    sfl(k);
    f(i,1,n+1)
    {
        sfl(color[i]);
    }
    f(i, 1, n)
    {
        ll x, y;
        sfl(x);
        sfl(y);
        v1[x].pb(y);
        v1[y].pb(x);
    }
    dfs(1, -1);
    twotoithparent(n);
    /* f(i, 1, n + 1)
     {
         f(j, 0, 6)
         {
             cout << parent[i][j] << " ";
         }
         cout << endl;
     }*/
    f(i, 1, n + 1)
    {
     
        ll ans = kparent(k, i);
        // cout << ans << endl;
        if (color[ans] == color[i])
        {
            cout << ans << " ";
        }
        else
        {
            cout << "-1" << " ";
        }
    }


}
