#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define shazam ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define M 1000000007
#define pb(x) push_back(x)
#define m_p(x,y) make_pair(x,y)
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll power(ll x, ll y, ll p)
{
	ll res = 1;
	x = x % p;

	while (y > 0) {
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}
ll modInverse(ll n, ll p)
{
	return power(n, p - 2, p);
}
ll nCr(ll n, ll r, ll p)
{
	ll ans = 1;
	ll fact[n + 1];
	fact[0] = 1;
	for (ll i = 1; i <= n; i++)fact[i] = ((fact[i - 1] % p) * (i % p)) % p;
	return (((fact[n] * modInverse(fact[n - r], p)) % p) * modInverse(fact[r], p)) % p;
}
int main()
{
	shazam;
	ll i, j, p, q, t, x, y, z, n, m, k, r;
	cin >> n >> r >> p;
	cout << nCr(n, r, p) << "\n";
}
