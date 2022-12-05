#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x1, y1, x2, y2, ans;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << (x2 - x1)*(y2 - y1) + 1 << '\n';
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