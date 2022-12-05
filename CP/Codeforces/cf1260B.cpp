#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, x, y;
    cin >> a >> b;
    x = 2*a - b, y = 2*b - a;
    if(!(x%3) && !(y%3) && x/3 >= 0 && y/3 >= 0) cout << "YES\n";
    else cout << "NO\n";
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