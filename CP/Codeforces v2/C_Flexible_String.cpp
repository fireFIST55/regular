#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll n){
    ll ans = n * (1 + n) / (ll) 2;
    return ans;
}

void solve(){
    int n, k; cin >> n >> k;
    string s, a; cin >> s >> a;
    vector<int>freq(26), khela;
    for(int i = 0; i < n; i += 1){
        if(!freq[s[i] - 'a']) khela.emplace_back(s[i] - 'a');
        freq[s[i] - 'a'] += 1;
    }
    int m = khela.size();
    ll ans = INT_MIN;
    for(int i = 0; i < (1 << m); i += 1){
        vector<int>sfreq(26);
        int count = 0;
        for(int l = 0; l < m; l += 1){
            if(i & (1 << l)) sfreq[khela[l]] = 1, count += 1;
        }

        if(count > k) continue;
        ll curr = 0;
        for(int l = 0; l < n; l += 1){
            int cnt = 0, j = l;
            while(j < n && (s[j] == a[j] || sfreq[s[j] - 'a'])){
                cnt += 1; j += 1;
            }
            l = j; curr += calc(cnt);
        }
        ans = max(ans, curr);
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