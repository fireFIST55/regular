#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin >> n;
    for(ll i = 1; i <= 40; i += 1){
        int m = n - (1LL << i), x = abs(m);
        if(x >= (1LL << i)) continue;
        deque<int>ans; ll sub = 0;
        for(ll k = 1; k < i; k += 1){
            if(x & (1LL < k)){
                ans.push_back(2); sub += (1LL << (k - 1));
            }
            else ans.push_back(1), sub -= (1LL << (k - 1));
        }
        ans.emplace_back(2); sub += (1LL << (i - 1));
        if(sub == x){
            cout << ans.size() << '\n';
            while(!ans.empty()){
                if(m >= 0) cout << ans.front() << ' ';
                else cout << (ans.front() == 1? 2: 1) << ' ';
                ans.pop_front();
            }
            cout << '\n';
            return;
        }
    }
    cout << - 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();
    return 0;
}