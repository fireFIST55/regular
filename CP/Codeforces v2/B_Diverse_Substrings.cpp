#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll ans = 0; 
    string s; cin >> n >> s;
    for(int i = 0; i < n; i += 1){
        vector<int>freq(10);
        int cnt = 0, mx = 0;
        for(int j = i; j < i + 100 && j < n; j += 1){
            if(!freq[s[j] - 48]) cnt += 1;
            freq[s[j] - 48] += 1; mx = max(mx, freq[s[j] - 48]);
            if(cnt == mx) ans += (ll)1;
        }
    }
    cout << ans << '\n';
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