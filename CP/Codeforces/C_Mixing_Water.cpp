#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int h, c, t; cin >> h >> c >> t;
	if (h + c - 2 * t >= 0) cout << 2 << '\n';
	else{
		int a = h - t;
		int b = 2 * t - c - h;
		int k = 2 * (a / b) + 1;
		ll val1 = abs(k / 2 * 1ll * c + (k + 1) / 2 * 1ll * h - t * 1ll * k);
		ll val2 = abs((k + 2) / 2 * 1ll * c + (k + 3) / 2 * 1ll * h - t * 1ll * (k + 2));
		cout <<  (val1 * (k + 2) <= val2 * k ? k : k + 2) << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}