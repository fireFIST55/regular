#include<bits/stdc++.h>
#define ll long long
using namespace std;

void pr(char ch, int n){
    for(int i = 0; i < n; i += 1) cout << ch;
}

void solve(){
    int n, m, k; cin >> n >> m >> k;
    for(int i = 0; i < 2*k; i += 1){
        int u, v; cin >> u >> v;
    }

    cout << n - 1 + m - 1 + m*(n - 1) + (m - 1) << '\n';
    pr('U', n - 1);
    pr('L', m - 1);
    for(int i = 0; i < m; i += 1){
        if(!(i&1)) pr('D', n - 1);
        else pr('U', n - 1);

        if(i < m - 1) cout << 'R';
    }
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}