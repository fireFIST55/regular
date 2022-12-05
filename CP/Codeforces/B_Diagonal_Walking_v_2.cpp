#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    ll x1, y1, moves; cin >> x1 >> y1 >> moves;
    if(x1 > moves){
        cout << - 1 << '\n';
        return;
    }
    if(x1 % 2 != y1 % 2) moves -= 1;
    else if(x1 % 2 != moves % 2) moves -= 2;

    cout << moves << '\n';
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