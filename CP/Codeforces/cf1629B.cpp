#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int l, r, k, odd;
    cin >> l >> r >> k;
    odd = (r&1?(r + 1)/2: r/2) - (l/2);
    
    if(r - l + 1 == 1 && l > 1) cout << "YES\n";
    else if(odd > k) cout << "NO\n";
    else cout << "YES\n";
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