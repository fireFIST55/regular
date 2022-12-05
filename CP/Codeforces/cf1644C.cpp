#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll slidwind(ll a[], ll w, ll n)
{
	ll s = 0, ans = INT_MIN;
	for (int i = 0; i < w; i++)
	{
		s += a[i];
	}
	ans = max(s, ans);
	ll l = 0, r = w;
	while (r < n)
	{
		s += a[r];
		s -= a[l];
		r++; l++;
		ans = max(s, ans);
	}
	return ans;
 
}
 
 
void solve()
{
	ll n, x; cin >> n >> x;
	ll a[n], s[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		s[i] = slidwind(a, i + 1, n);
	}
	for (int i = 0; i <= n; i++)
	{
		ll p = 0;
		for (int j = 0; j < n; j++)
		{
			p = max(p, s[j] + ( min(j + 1, i)) * x);
		}
		cout << p << " ";
	}
	/*for (auto i : s)
		cout << i << " ";*/
	cout << endl;
 
 
 
 
}
 
int main() {
 
 
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
    while(t--) solve();
 
	return 0;
}
