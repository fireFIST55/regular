#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, r, c, mx = INT_MIN; cin >> n >> m;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            int a; cin >> a;
            if(mx < a){
                mx = a; r = i; c = j;
            }
        }
    }

    cout << max(n - r, r + 1)*max(m - c, c + 1) << '\n';
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