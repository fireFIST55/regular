#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>khela[2];
    set<pair<int, int>>ans;
    auto askI = [&](int index){
        cout << "? " << index << endl;
        for(int i = 1; i <= n; i += 1){
            int d; cin >> d;
            khela[d&1].emplace_back(i);
        }
    };
    auto ask = [&](int index){
        cout << "? " << index << endl;
    };
    askI(1);

    for(int i: khela[1]) ans.insert({1, i});
    if(khela[0].size() < khela[1].size()) swap(khela[0], khela[1]);
    for(int u: khela[0]){
        if(u == 1) continue; ask(u);
        for(int i = 1; i <= n; i += 1){
            int d; cin >> d;
            if(d == 1) ans.insert({min(u, i), max(u, i)});
        }
    }
    cout << "!\n";
    for(auto it: ans) cout << it.first << " " << it.second << endl;
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