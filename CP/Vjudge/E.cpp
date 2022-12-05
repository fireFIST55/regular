#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    ll k, msgs, ans = 0; cin >> k >> msgs;
    ll left = 0, right = (ll)2*k - (ll)1;

    while(left <= right){
        ll mid = (left + right)/(ll)2, curr;
        if(mid <= k) curr = (mid*(mid + (ll)1))/(ll)2;
        else curr = (k*(k + (ll)1))/(ll)2;

        if(mid > k){
            ll x = k*(k - (ll)1)/(ll)2, y = (ll)2*k - (ll)1 - mid;
            curr += (x - (y*(y + (ll)1)/(ll)2));
        }

        if(curr <= msgs){
            ans = mid; left = mid + 1;
            if(curr != msgs && mid != (ll)2*k - (ll)1) ans = ans + (ll)1;
        }
        else{
            if(!mid) break;
            else right = mid - 1;
        }
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