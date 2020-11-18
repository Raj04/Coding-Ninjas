
// Single Source shortest path

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, n) for (i = 0; i < n; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define mod 1000000007
#define ps(x, y) fixed << setprecision(y) << x

void sks()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

vector<int> adj[100001];
int vis[100001], dist[100001];

void sssp(int nodev, int d)
{
    vis[nodev] = 1;
    dist[nodev] = d;

    for (int child : adj[nodev])
    {
        if (!vis[child])
            sssp(child, d + 1);
    }
}

int main()
{
    sks();

    int n, i, e, a, b;
    cin >> n >> e;

    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    sssp(1, 0);

    for (i = 1; i <= n; i++)
        cout << i << " ";

    cout << endl;
    for (i = 1; i <= n; i++)
        cout << dist[i] << " ";
    return 0;
}
