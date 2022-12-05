#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, one = 0; cin >> n;
    string s[n];
    vector<int>cnt(n);

    for(int i = 0; i < n; i += 1){
        cin >> s[i];
        for(int k = 0; k < n; k += 1){
            if(s[i][k] == '1'){
                one += 1;
                if(i <= k) cnt[k - i] += 1;
                else cnt[(n - i + k)%n] += 1;
            }
        }
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i += 1) ans = min(ans, (one - cnt[i]) + (n - cnt[i]));
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}