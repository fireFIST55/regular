#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sumofDig(ll n){
    ll sum = 0;
    while(n){
        sum += (n%(ll)10); n /= (ll)10;
    }

    return sum;
}

void solve(){
    ll n, s; cin >> n >> s;
    ll left = 1, right = n, start = 0;
    while(left <= right){
        ll mid = (left + right) / (ll)2;
        if(mid - sumofDig(mid) >= s){
            start = mid; right = - 1 + mid;
        }
        else left = 1 + mid;
    }

    ll ans = (1 + n - start); 
    start?cout << ans: cout << start;
    cout << '\n';
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