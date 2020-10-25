/*"Success isn't permanent, failure isn't fatal,
    it's the courage to continue that counts"
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀     ⠀⠀⠀⠀⠀⠀⠀⠀⣠⡖⠁⠀⠀⠀⠀⠀⠀⠈⢲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀     ⠀⠀⠀⠀⠀⠀⠀⣼⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀
⠀     ⠀⠀⠀⠀⠀⠀⣸⣿⠁  HIMANSHU⠀⠈⣿⣇⠀⠀⠀⠀⠀⠀⠀
⠀     ⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⢀⣀⣤⣤⣤⣤⣀⡀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀     ⠀⠀⠀⠀⠀⠀⢻⣿⣿⣔⢿⡿⠟⠛⠛⠻⢿⡿⣢⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀
⠀     ⠀⠀⠀⣀⣤⣶⣾⣿⣿⣿⣷⣤⣀⡀⢀⣀⣤⣾⣿⣿⣿⣷⣶⣤⡀⠀⠀⠀⠀
⠀     ⠀⢠⣾⣿⡿⠿⠿⠿⣿⣿⣿⣿⡿⠏⠻⢿⣿⣿⣿⣿⠿⠿⠿⢿⣿⣷⡀⠀⠀
⠀     ⢠⡿⠋⠁⠀⠀⢸⣿⡇⠉⠻⣿⠇⠀⠀⠸⣿⡿⠋⢰⣿⡇⠀⠀⠈⠙⢿⡄⠀
⠀     ⡿⠁⠀⠀⠀⠀⠘⣿⣷⡀⠀⠰⣿⣶⣶⣿⡎⠀⢀⣾⣿⠇⠀⠀⠀⠀⠈⢿⠀
⠀     ⡇⠀⠀⠀⠀⠀⠀⠹⣿⣷⣄⠀⣿⣿⣿⣿⠀⣠⣾⣿⠏⠀⠀⠀⠀⠀⠀⢸⠀
⠀     ⠁⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⢇⣿⣿⣿⣿⡸⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠈⠀
⠀     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀     ⠀⠀⠐⢤⣀⣀⢀⣀⣠⣴⣿⣿⠿⠋⠙⠿⣿⣿⣦⣄⣀⠀⠀⣀⡠⠂⠀⠀⠀
⠀     ⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠉⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠋⠁⠀⠀⠀
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
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define sor(v) sort(v.begin(),v.end())
#define sorrev(v) sort(v.begin(),v.end(),greater<ll>())
#define bs binary_search
#define lb(v,x) lower_bound(v.begin(),v.end(),x)-v.begin()
#define ub(v,x) upper_bound(v.begin(),v.end(),x)-v.begin()
#define ll long long
#define F first
#define S second
#define vi vector<ll>
#define vc vector<char>
#define endl "\n"
#define deci fixed<<setprecision(9)
const ll mod = 1e9 + 9;
#define N 1000005
vector<ll> v1[N + 1], v2;
bool vis[N + 1];
ll arr[N + 1], crr[N + 1], ans = 0, n1;
void dfs(ll s)
{
    vis[s] = true;
    ll i;
    arr[s]++;
    f(i, 0, v1[s].size())
    {
        ll k = v1[s][i];
        if (vis[k] == 0)
        {
            dfs(k);
            arr[s] += arr[k];
        }
    }

}
void dfs1(ll s)
{
    vis[s] = true;
    ll i;
    if (s != 1)
    {
        v2.pb(arr[s] * (n1 - arr[s]));
    }
    f(i, 0, v1[s].size())
    {
        ll k = v1[s][i];
        if (vis[k] == 0)
        {
            dfs1(k);
        }
    }

}
int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    ll n, k, i;
    sfl(n);
    sfl(k);
    n1 = n + 1;
    f(i, 1, n + 1)
    {
        ll x, y;
        sfl(x);
        sfl(y);
        v1[x].pb(y);
        v1[y].pb(x);
    }
    f(i, 1, n + 1)
    {
        sfl(crr[i]);
    }
    sort(crr + 1, crr + (n + 1));
    dfs(1);
    memset(vis, false, sizeof(vis));
    dfs1(1);
    sort(v2.begin(), v2.end());
    ll  j = 0;
    f(i, 1, n + 1)
    {
        ans += (crr[i] * v2[j++]);
    }
    cout << ans << endl;
    return 0;
}
