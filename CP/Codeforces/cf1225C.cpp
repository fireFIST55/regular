#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int ans = 0;
    ll n, p; cin >> n >> p;

    if(!p){
        for(int i = 0; i < 31; i += 1){
            if(n&(1<<i)) ans += 1;
        }
    }
    else{
        for(int mul = 1; mul < 31; mul += 1){
            int cnt = 0, extra = 0;
            ll x = n - (ll)mul*p;

            for(int i = 0; i < 31 && cnt <= mul; i += 1){
                if(x&(1 << i)){
                    cnt += 1; extra += (i&1);
                }
            }

            if((cnt == mul) || (cnt < mul && (cnt + extra) >= mul)){
                ans = mul; break;
            }
        }

        if(!ans){
            cout << - 1 << '\n';
            return;
        }
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