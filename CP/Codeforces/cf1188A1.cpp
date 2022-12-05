#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>degree(n + 1);
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        degree[u] += 1; degree[v] += 1;
    }

    for(int i = 1; i <= n; i += 1){
        if(degree[i] == 2){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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