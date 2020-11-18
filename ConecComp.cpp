
// Counting the no of connected componnents

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> adj[100001];
int vis[100001];

void dfs(int val)
{
    vis[val] = 1;

    for (int child : adj[val])
    {
        if (!vis[child])
            dfs(child);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, a, b, n, m;
    cin >> n; //no of nodes
    cin >> m; //no of edges

    for (i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int cv = 0;

    for (i = 1; i <= n; i++)
    {
        if (vis[i] == 0) //checking whether the node is visited or not
        {
            dfs(i); //calling the dfs function
            cv++;
        }
    }
    cout << cv;
}
