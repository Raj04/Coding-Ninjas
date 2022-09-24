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
#define uni(v) unique(v.begin(),v.end())
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
ll arr[N + 1];
ll mark1[N + 1], mark2[N + 1], mark3[N + 1];
vector<ll> v1[N + 1];
bool vis[N + 1] = {false};
ll flag = 0;
void dfs(ll s, ll d)
{
    vis[s] = true;
    ll i;
    for (i = 0; i < v1[s].size(); i++)
    {
        ll k = v1[s][i];
        if (vis[k] == 0)
        {
            dfs(k, d);

            if (arr[k] % d == 0)
            {
                mark1[k]++;
                if (arr[s] % d == 0)
                {
                    mark1[s] = max(mark1[s], mark1[k]);
                }

            }
        }
    }
    //cout << s << endl;
}
void dfs1(ll s, ll d)
{
    vis[s] = true;
    ll i;
    for (i = 0; i < v1[s].size(); i++)
    {
        ll k = v1[s][i];
        if (vis[k] == 0)
        {
            dfs1(k, d);
            if (arr[k] % d == 0)
            {
                if (arr[s] % d == 0)
                {
                    if (mark1[k] >= mark2[s])
                    {
                        //  cout << mark1[k] << " " << mark2[s] << endl;
                        mark3[s] = mark2[s];
                        mark2[s] = mark1[k];
                    }
                    else
                    {
                        if (mark1[k] >= mark3[s])
                        {
                            mark3[s] = mark1[k];
                        }
                    }
                }
            }
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
    ll n, k;
    sfl(n);
    sfl(k);
    f(i, 1, n + 1)
    {
        sfl(arr[i]);
    }
    f(i, 1, n)
    {
        ll x, y;
        sfl(x);
        sfl(y);
        v1[x].pb(y);
        v1[y].pb(x);
    }
    dfs(1, k);
    if (arr[1] % k == 0)
    {
        mark1[1]++;
    }
    memset(vis, false, sizeof(vis));
    dfs1(1, k);
    ll ans =0;
    f(i, 1, n + 1)
    {
        //cout << mark2[i] << " " << mark3[i] << endl;
        if (arr[i] % k == 0)
        {
            ans = max(ans, mark1[i]);
            ans = max(ans, mark2[i] + mark3[i] + 1);
        }
    }
    if(ans==0)
    {
        cout<<0<<endl;
    }
    else
    {
    cout << ans - 1 << endl;
    }
}
