#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n), vc2;
    for(ll &i: vc) cin >> i;
    vc2 = vc;
    if(n == 1){
        cout << abs(vc[0]) << '\n';
        return;
    }
    
    ll ans, curr = 0, decrease = 0;
    for(int i = 1; i < n; i += 1){
        vc[i] -= decrease;
        if(vc[i] > vc[i - 1]){
            curr += (vc[i] - vc[i - 1]); decrease += (vc[i] - vc[i - 1]); vc[i] = vc[i - 1];
        }
        else if(vc[i - 1] > vc[i]) curr += (vc[i - 1] - vc[i]);
    }
    curr += abs(vc[n - 1]);
    ans = curr; curr = decrease = 0;

    for(int i = n - 2; i >= 0; i -= 1){
        vc2[i] -= decrease;
        if(vc2[i] > vc2[i + 1]){
            curr += (vc2[i] - vc2[i + 1]); decrease += (vc2[i] - vc2[i + 1]); vc2[i] = vc2[i + 1];
        }
        else if(vc2[i + 1] > vc2[i]) curr += (vc2[i + 1] - vc2[i]);
    }
    ans = min(ans, (curr + abs(vc2[0])));
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