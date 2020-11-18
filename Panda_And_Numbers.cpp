#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define shazam ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define M 1000000007
using namespace std;
bool mark[1000001];
bool vis[1000001];
void ins(ll num)
{
	vis[num] = true;
	set<ll>distinct;
	distinct.clear();
	ll x = num;
	while (x > 0)
	{
		distinct.insert(x % 10);
		x /= 10;
	}
	bool ans = false;
	for (auto it = distinct.begin(); it != distinct.end(); it++)
	{
        if((num - ((*it) * (*it)))>0)
		ans |= mark[(num - ((*it) * (*it)))];
		if (ans) {break;}
	}
	mark[num] = ans;
}
int main()
{
	shazam;
	ll i, t, n, m, x, k, y, j, l, r, z;
	memset(mark, false, sizeof(mark));
	memset(vis, false, sizeof(vis));
	for (i = 1; i <= 7; i++) {mark[(ll)pow(i, i)] = true; vis[(ll)pow(i, i)] = true;}
	for (i = 1; i <= 1000000; i++)
	{
		if (!vis[i])
			ins(i);
	}
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (mark[n])
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}

}
