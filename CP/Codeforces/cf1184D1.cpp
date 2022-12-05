#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, m, t; cin >> n >> k >> m >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if(x){
            if(y > k) n += 1;
            else{
                n += 1; k += 1;
            }
        }
        else{
            if(y >= k) n = y;
            else{
                n -= y; k -= y;
            }
        }

        cout << n << " " << k << '\n';
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