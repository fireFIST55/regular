#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x, y; cin >> x >> y;
    int z = x*x + y*y, zz = sqrt(z);

    if(!x && !y) cout << 0 << '\n';
    else if(zz*zz == z) cout << 1 << '\n';
    else cout << 2 << '\n';
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