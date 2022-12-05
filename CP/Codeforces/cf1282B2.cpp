#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, ans = 0;
    ll coins, curr;
    cin >> n >> coins >> k;
    vector<ll>vc(n), one(n), other(n);
    for(ll &i: vc) cin >> i;
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i += 1){
        if(i < k - 1){
            one[i] += (i?one[i - 1] + vc[i]: vc[i]); curr = one[i];
        }
        else{
            one[i] = (i == k - 1)?one[i - 1] + vc[i]: min(other[i - 1] + vc[i], one[i - 1] + vc[i]);
            other[i] = (i == k - 1)?vc[i]: min(one[i - k] + vc[i], ((i - k) >= (k - 1)?other[i - k] + vc[i]: INT_MAX));
            curr = min(one[i], other[i]);
        }

        if(curr <= coins) ans = i + 1;
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