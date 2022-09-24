#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
vector<int> capList[101];
int dp[1025][101];
int allmask;
long long int countWaysUtil(int mask, int i)
{
    if (mask == allmask) return 1;
    if (i > 100) return 0;
    if (dp[mask][i] != -1) return dp[mask][i];
    long long int ways = countWaysUtil(mask, i+1);
    int size = capList[i].size();
    for (int j = 0; j < size; j++)
    {
        if (mask & (1 << capList[i][j])) continue;
        else ways += countWaysUtil(mask | (1 << capList[i][j]), i+1);
        ways %= MOD;
    }
    return dp[mask][i] = ways;
}
void countWays(int n)
{
    string temp, str;
    int x;
    getline(cin, str); 
    for (int i=0; i<n; i++)
    {
        getline(cin, str);
        stringstream ss(str);
        while (ss >> temp)
        {
            stringstream s;
            s << temp;
            s >> x;
            capList[x].push_back(i);
        }
    }
    allmask = (1 << n) - 1;
    memset(dp, -1, sizeof dp);
    cout << countWaysUtil(0, 1) << endl;
}

int main()
{ 
     int n;
     cin >> n;
     countWays(n);
     return 0;
}
