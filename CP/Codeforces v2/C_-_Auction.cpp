#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, nine = 9, two = 2, one = 1, cnt = 0; cin >> n;
    n = n + one;
    while(n > 1){
        if(!(cnt & 1)) n = (n + nine - one) / nine;
        else n = (n + two - one) / two;
        cnt += 1;
    }
    if(cnt & 1) cout << "YES\n";
    else cout << "NO\n";
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