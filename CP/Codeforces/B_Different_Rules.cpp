#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x, y, mx; cin >> n >> x >> y;
    int mn = max(1, min(n, x + y + 1 - n));
    mx = min(n, x + y - 1);
    cout << mn << " " << mx << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}