#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;

void solve(){
    bool done = 0;
    ll l, r, cnt = 0, oddcnt = 0, evencnt = 0, lo = 0, ro = 0, le = 0, re = 0, curr = 1; cin >> l >> r;
    for(int i = 0; cnt < r; i += 1){
        if(!(i & 1)){
            lo = (cnt < l)?cnt + curr * (ll) 2 < l?oddcnt + curr * (ll)2: oddcnt + curr * (ll)2 - (l - (cnt + curr * (ll)2)): lo;
            if(cnt + curr * (ll)2 >= r){
                cnt = r;
                ro = oddcnt + curr * (ll)2 - (cnt + curr * (ll)2 - r);
            }
            else ro = oddcnt + curr * (ll)2, curr += curr * (ll)2;
        }
        else{
            le = (cnt < l)?
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}