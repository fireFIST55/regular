#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q;
	cin >> n >> q;
	
	vector<int> cnt(31);
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		++cnt[__builtin_ctz(x)];
	}
	
	while (q--) {
		int x;
		cin >> x;
		
		int ans = 0;
		for (int i = 30; i >= 0 && x > 0; --i) {
			int need = min(x >> i, cnt[i]);
			ans += need;
			x -= (1 << i) * need;
		}
		
		if (x > 0)
			ans = -1;
		cout << ans << endl;
	}
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}