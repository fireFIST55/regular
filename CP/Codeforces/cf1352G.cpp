#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    if(n <= 3){
        cout << - 1 << '\n';
        return;
    }
    for(int i = n; i >= 1; i -= 1){
        if(i&1) cout << i << ' ';
    }

    cout << 4 << ' ' << 2;
    for(int i = 6; i <= n; i += 2) cout << ' ' << i;
    cout << '\n';
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