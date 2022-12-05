#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

vector<vector<int>>cnt(2, vector<int>(((1 << 20) + 5), 0));

void solve(){
    int n; cin >> n;
    ll ans = 0;
    int curr = 0;
    
    cnt[1][0] = 1;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; curr ^= a;
        ans += (ll)cnt[i%2][curr];

        cnt[i%2][curr] += 1;
    }

    cout << ans << '\n';
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