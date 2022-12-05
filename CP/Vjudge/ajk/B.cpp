#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int res = a * b * c;
    res = max(res, (a + b)*c); res = max(res, a * (b + c)); res = max(res, a + b + c);
    cout << res << '\n';
}

int main(void){
    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}