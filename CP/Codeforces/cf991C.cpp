#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin >> n;
    ll left = 1, right = n, ans = n;
    while(left <= right){
        ll mid = (left + right)/(ll)2, petya = 0, x = n;
        while(x){
            ll khela = min(x, mid); petya += khela; x -= khela;

            if(x < 10) continue;
            x = x - x/10;
        }

        if(petya*2 >= n){
            ans = mid; right = mid - 1;
            // cout << mid << " " << petya << '\n';
        }
        else left = mid + 1;
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