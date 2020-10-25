#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define shazam ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define M 1000000007
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll fact[1000001];
bool prime[1000001];
void SieveOfEratosthenes(ll n)
{
	memset(prime, true, sizeof(prime));
	for (ll p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (ll i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	prime[2] = true; prime[1] = false;
}
ll modinverse(ll x, unsigned long long int y, unsigned long long int m)
{
	if (y == 0)
		return 1;
	ll p = modinverse(x, y / 2, m) % m;
	p = (p * p) % m;
	return (y % 2 == 0) ? p : (x * p) % m;
}
ll xraisey(ll x, unsigned long long int y, ll p)
{
	ll res = 1;
	x = x % p;
	if (x == 0) return 0;
	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}
ll ncr(ll n, ll r, ll m )
{
	if (n < r)return 1;
	ll result = 1;
	result = (result * fact[n]) % m;
	result = (result * modinverse(fact[n - r], m - 2, m)) % m;
	result = (result * modinverse(fact[r], m - 2, m)) % m;
	return result;
}
ll ncrcal[1007][1007];
void pre()
{
	ncrcal[0][0] = 1;
	for (ll i = 1; i < 1007; i++)
	{
		ncrcal[i][0] = 1;
		ncrcal[i][1] = i;
		if (i > 1)
			for (ll j = 1; j <= i; j++)
			{
				ncrcal[i][j] = (ncrcal[i - 1][j] + ncrcal[i - 1][j - 1]) % (M - 1);
			}
	}
}
int main()
{
	shazam;
	ll i, j, k, p, q, t, n, m, x, y;
	cin >> t;
	SieveOfEratosthenes(1000001); pre();
	fact[0] = 1;
	for (i = 1; i < 10001; i++) {fact[i] = (fact[i - 1] * i) % (M - 1);}
	while (t--)
	{
		cin >> n;
		x = 0; y = 0; ll a[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			if (prime[a[i]])x++;
			else y++;
		}
		p = xraisey(2, y, M - 1);
		ll ans = xraisey(2, p, M);
		for (i = 1; i <= x; i++)
		{
			j = ncrcal[x][i];
			j = (j * p) % (M - 1);
			k = xraisey(i + 2, j, M);
			ans = (ans * k) % M;
		}
		cout << ans << "\n";
	}

}
