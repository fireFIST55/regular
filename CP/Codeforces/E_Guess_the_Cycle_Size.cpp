#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ask(int i){
    ll x, y; 
    cout << "? " << 1 << " " << i << endl;
    cin >> x;
    cout << "? " << i << " " << 1 << endl;
    cin >> y;

    if(x == - 1) return i - 1;
    else if(x != y) return x + y;
    else return 0;
}

void solve(){
    for(int i = 2; i <= 26; i += 1){
        ll ans = ask(i);
        if(ans){
            cout << "! " << ans << endl;
            return;
        }
    }    
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}