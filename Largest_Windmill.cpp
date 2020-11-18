#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define shazam ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define M 998244353
#define pb(x) push_back(x)
#define m_p(x,y) make_pair(x,y)
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
bool vis[100005], vis1[100005];
ll ma = 0, maxid = 0, ma1 = 0, maxid1 = 0;
vector<ll>adj[100005];
ll cc = 0;
ll m1[100005], m2[100005];
ll par[100005][22];
void dfs(ll x, ll y)
{
	vis[x] = true;
	m1[x] = m1[y] + 1;
	if (m1[x] > ma) {ma = m1[x]; maxid = x;}
	par[x][0] = y;
	for (ll i = 0; i < adj[x].size(); i++)
	{
		if (!vis[adj[x][i]])
		{
			dfs(adj[x][i], x);
		}
	}
}
void dfs1(ll x, ll y)
{
	vis1[x] = true;
	m2[x] = m2[y] + 1;
	if (m2[x] > ma1) {ma1 = m2[x]; maxid1 = x;}
	par[x][0] = y;
	for (ll i = 0; i < adj[x].size(); i++)
	{
		if (!vis1[adj[x][i]])
		{
			dfs1(adj[x][i], x);
		}
	}
}
ll lca(ll x, ll y)
{
	if (x == y)return x;
	ll d = abs(m2[x] - m2[y]);
	if (m2[x] < m2[y])swap(x, y);
	ll ith = x;
	while (d > 0)
	{
		ll lo = log2(d);
		ith = par[ith][lo];
		d -= pow(2, lo);
	}
	if (ith == y)return y;
	ll i = 20;
	while (i >= 0)
	{
		if (par[ith][i] != par[y][i])
		{
			ith = par[ith][i];
			y = par[y][i];
		}
		i--;
	}
	return par[ith][0];
}
void util(ll n)
{
	for (ll i = 1; i <= 20; i++)
	{
		for (ll j = 1; j <= n; j++)
		{
			par[j][i] = par[par[j][i - 1]][i - 1];
		}
	}
}
int main()
{
	shazam;
	ll i, j, k, p, q, t, n, m, x, y, z;
	cin >> n; m = n - 1;
	for (i = 0; i <= n; i++) {vis[i] = vis1[i] = false;}
	while (m--)
	{
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}

	dfs(1, 0); //maxid
	//cout << maxid << "\n";
	dfs1(maxid, 0); //maxid1
	//bcout << maxid1;
	util(n);
	ll final = 0, ans = 0;
	bool flag = false;
	for (i = 1; i <= n; i++)
	{
		ll lon = max(m2[maxid] + m2[i] - (2 * m2[lca(i, maxid)]), m2[maxid1] + m2[i] - (2 * m2[lca(i, maxid1)]));
		//cout << i << " " << lon << "\n";
		if (final < adj[i].size() + lon && adj[i].size() >= 5 && lon >= 3)
		{
			final = adj[i].size() + lon;
			ans = i;
			flag = true;
		}
	}
	if (flag)cout << final << " " << ans;
	else cout << "-1\n";

}
