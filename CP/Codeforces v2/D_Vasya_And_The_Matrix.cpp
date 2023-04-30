#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, xr = 0, xr1 = 0; cin >> n >> m;   
    vector<int>a(n), b(m);
    for(int &i: a){
        cin >> i; xr ^= i;
    }
    for(int i = 0; i < m; i += 1){
        cin >> b[i]; xr ^= b[i];
        if(i) xr1 ^= b[i];
    }
    if(xr){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << (a[0] ^ xr1) << " ";
    for(int i = 1; i < m; i += 1) cout << b[i] << " ";
    cout << '\n';
    for(int i = 1; i < n; i += 1){
        cout << a[i] << " ";
        for(int j = 1; j < m; j += 1) cout << 0 << " ";
        cout << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}