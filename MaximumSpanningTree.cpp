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
#define N 100005
pair<ll, pair<ll, ll>> v1[100005];
ll arr[1000005];
ll mx1[1000005];
ll mn1[1000005];
ll size[1000005];
void init(ll n)
{
    ll i;
    f(i, 1, n + 1)
    {
        arr[i] = i;
        size[i] = 1;
        mx1[i] = i;
        mn1[i] = i;
    }
}
ll root(ll x)
{
    while (arr[x] != x)
    {
        arr[x] = arr[arr[x]];
        x = arr[x];
    }
    return x;
}
void uni(ll x, ll y)
{
    ll root_x = root(x);
    ll root_y = root(y);
    if (size[root_x] < size[root_y])
    {
        mx1[root_y] = max(mx1[root_x], mx1[root_y]);
        mn1[root_y] = min(mn1[root_x], mn1[root_y]);
        arr[root_x] = root_y;
        size[root_y] += size[root_x];
    }
    else
    {
        mx1[root_x] = max(mx1[root_x], mx1[root_y]);
        mn1[root_x] = min(mn1[root_x], mn1[root_y]);
        arr[root_y] = root_x;
        size[root_x] += size[root_y];
    }
}
bool find(ll x, ll y)
{
    if (root(x) == root(y))
    {
        return true;
    }
    else
    {
        return false;
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
    ll t;
    sfl(t);
    while (t--)
    {
        ll n, m, i;
        sfl(n);
        sfl(m);
        init(n);
        f(i, 1, m + 1)
        {
            ll x, y, z;
            sfl(x);
            sfl(y);
            sfl(z);
            v1[i] = mp(z, mp(x, y));
        }
        sort(v1 + 1, v1 + (m + 1));
        ll max_cost = 0;
        for (i = m; i >= 1; i--)
        {
            ll x1 = v1[i].second.first;
            ll x2 = v1[i].second.second;
            ll wei = v1[i].first;
            if (root(x1) != root(x2))
            {
                uni(x1, x2);
                max_cost += wei;
            }
        }
        cout << max_cost << endl;

    }
}
