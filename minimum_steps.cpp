#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long int
#define shazam ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define M 1000000007
using namespace std;
ll LongestIncreasingSubsequenceLength(vector<ll>& v)
{
	if (v.size() == 0)
		return 0;
	vector<ll> tail(v.size(), 0);
	ll length = 1;
	tail[0] = v[0];
	for (ll i = 1; i < v.size(); i++)
	{
		auto b = tail.begin(), e = tail.begin() + length;
		auto it = lower_bound(b, e, v[i]);
		if (it == tail.begin() + length)
			tail[length++] = v[i];
		else
			*it = v[i];
	}
	return length;
}
int main()
{
	shazam;
	ll i, t, n, m, x, k, y, z, j, w, p, q,  a, b, r, c, sum, ans;
	string s, s1;
	cin >> t;
	vector<ll> v, v1;
	for (i = 0; i < t; i++) {cin >> x; v.push_back(x);}
	n = LongestIncreasingSubsequenceLength(v);
	for (i = t - 1; i >= 0; i--) {v1.push_back(v[i]);}
	m = LongestIncreasingSubsequenceLength(v1);
	//cout << n << " " << m << "\n";
	cout << t - max(n, m) << "\n";
}


