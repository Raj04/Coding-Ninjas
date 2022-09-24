//Bipartite Graph Test
//By coloring of nodes

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, a, n) for (i = a; i < n; i++)
#define fe(i, a, n) for (i = a; i <= n; i++)
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
int vis[100001], col[100001];

bool dfs(int node, int c)
{
    vis[node] = 1;
    col[node] = c;
    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            bool temp = dfs(child, c ^ 1);
            if (temp == false)
                return false;
        }

        else
        {
            if (col[node] == col[child])
                return false;
            ;
        }
    }

    return true;
}

int main()
{
    sks();

    int n, e, a, b, i;
    cin >> n >> e;

    f(i, 0, e)
    {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    bool val = dfs(1, 1);

    if (val == true)
        cout << "Graph is Bipartite";
    else
        cout << "Graph is not Bipartite";

    return 0;
}
