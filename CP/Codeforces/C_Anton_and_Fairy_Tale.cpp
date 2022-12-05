#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    ll cap, pday; cin >> cap >> pday;
    if(cap <= pday) cout << cap << '\n';
    else{
        cap -= pday;
        ll left = 0, right = 2e9, ans;
        while(left <= right){
            ll mid = (left + right) / (ll)2;
            if(cap <= mid*(1 + mid)/(ll)2){
                ans = mid; right = mid - 1;
            }
            else left = mid + 1;
        }
        cout << ans + pday << '\n';
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