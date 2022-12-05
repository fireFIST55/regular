#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<ll>h, cnt(200005);
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        if(!cnt[a]) h.emplace_back(a); cnt[a] += 1;
    }
    sort(h.begin(), h.end(), greater<ll>());

    int m = h.size();
    if(m == 1){
        cout << 0 << '\n';
        return;
    }
    ll count = 0, slices = 0, curr = 0;

    for(int i = 0; i < m; i ++){
        while(i < m && curr + h[i]*cnt[h[i]] - (count + cnt[h[i]])*h[i] <= k){
            count += cnt[h[i]]; curr += h[i]*cnt[h[i]]; i += 1;
        }

        slices += 1;
        if(i < m){
            ll mid, left = h[i], right = h[i - 1], till;
            while(left <= right){
                mid = (left + right) / 2;
                if(curr - count*mid <= k){
                    right = mid - 1; till = mid;
                }
                else left = mid + 1;
            }

            curr = count*till;
        }
        
        i -= 1;
    }

    cout << slices << '\n';
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