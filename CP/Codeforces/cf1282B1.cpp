#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll ans = 0;
    int n, coins, k, total = 0;
    cin >> n >> coins >> k;
    vector<ll>vc(n), one(n), two(n);

    for(ll &i: vc) cin >> i;
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i += 1){
        if(!i) one[i] = vc[i], ans = vc[i];
        else{
            one[i] = min(one[i - 1] + vc[i], ((i - 2 >= 0)?(two[i - 1] + vc[i]): INT_MAX));
            two[i] = (i - 2 >= 0)? min((i - 2 > 0?two[i - 2] + vc[i]: INT_MAX), one[i - 2] + vc[i]): vc[i];

            ans = min(one[i], two[i]);
        }

        if(ans > coins) break;
        else total += 1;

        // cout << "Index : " << i << " Coins: " << ans << " Curr ans: " << total << endl << endl;
    }

    cout << total << '\n';
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