#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>time(n), health(n);

    for(ll &i: time) cin >> i;
    for(ll &i: health) cin >> i;

    ll left = 1, ans = 0;
    for(int i = 0; i < n; i += 1){
        int k = i + 1; left = time[i] + 1;
        while(k < n && time[k] - left + 1 < health[k]){
            k += 1;
            if(k < n) left = time[k] + 1;
        }

        k -= 1;
        ll x = health[i] + time[k] - time[i];
        ans += ((x*(x + 1))/(ll)2); left = time[k] + 1; i = k;
    }

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