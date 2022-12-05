#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    ll d, k, x = 0, y = 0; cin >> d >> k;
    while(1){
        if(x <= y && (x + k) * (x + k) + y * y <= d * d) x += k;
        else if(x > y && x * x + (y + k) * (y + k) <= d * d) y += k;
        else break;
    }

    if(x == y) cout << "Utkarsh\n";
    else cout << "Ashish\n";
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