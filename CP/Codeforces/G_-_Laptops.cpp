#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>>khela;
    for(int i = 0; i < n; i += 1){
        int u, v; cin >> u >> v; khela.emplace_back(u, v);
    }
    sort(khela.begin(), khela.end());
    vector<int>suffix(n);
    for(int i = n - 1; i >= 0; i -= 1){
        suffix[i] = min((i < n - 1?suffix[i + 1]: INT_MAX), khela[i].second);
    }
    
    bool happy = 0;
    for(int i = 0; i < n - 1&& !happy; i += 1){
        if(suffix[i + 1] < khela[i].second) happy = 1;
    }
    cout << (happy?"Happy Alex\n": "Poor Alex\n");
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