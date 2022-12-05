#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    deque<pair<ll, ll>>left, right;

    bool fin = 0;
    ll curr = 0, mn = LONG_LONG_MAX;
    for(int i = k - 2; i >= 0; i -= 1){
        curr += (ll)vc[i]; mn = min(mn, curr);
        if(curr >= 0){
            if(!i) fin = 1;
            left.push_back({curr, mn}); curr = 0; mn = LONG_LONG_MAX; 
        }
    }
    if(!fin) left.push_back({curr, mn});
    
    fin = 0;
    curr = 0, mn = LONG_LONG_MAX;
    for(int i = k; i < n; i += 1){
        curr += vc[i]; mn = min(mn, curr);
        if(curr >= 0){
            if(i == n - 1) fin = 1;
            right.push_back({curr, mn}); curr = 0; mn = LONG_LONG_MAX;
        }
    }
    if(!fin) right.push_back({curr, mn});

    ll have = vc[k - 1];
    while(!left.empty() && !right.empty()){
        if(-left.front().second <= have){
            have += left.front().first; left.pop_front();
        }
        else if(-right.front().second <= have){
            have += right.front().first; right.pop_front();
        }
        else break;
    }

    if(left.empty() || right.empty()) cout << "YES\n";
    else cout << "NO\n";
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