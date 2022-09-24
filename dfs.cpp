
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
int vis[100001]; //array to check if a node is visited or not

//using for each loop
void dfs(int v)
{
    vis[v] = 1;
    cout << v << "->";

    for (int child : adj[v])
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

    int n, m, i, a, b;
    cin >> n; //no of nodes
    cin >> m; //no of edges

    for (i = 0; i < m; i++)
    {
        cin >> a >> b; // values of two nodes forming an edge
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1); //calling the dfs function
    return 0;
}
