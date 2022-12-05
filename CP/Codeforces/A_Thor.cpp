#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int types, q; cin >> types >> q;
    set<int>khela[types + 1];
    set<pair<int, int>>khelap;
    for(int i = 1; i <= q; i += 1){
        int t, app; cin >> t >> app;
        if(t == 1){
            khela[app].insert(i); khelap.insert({i, app});
        }
        else if(t == 2){
            for(auto it: khela[app]){
                auto add = khelap.find({it, app});
                if(add != khelap.end()) khelap.erase(add);
            }
            khela[app].clear();
        }
        else{
            while(!khelap.empty() && khelap.begin() -> first <= app){
                auto add = khela[khelap.begin() -> second].find(khelap.begin() -> first);
                if(add != khela[khelap.begin() -> second].end())  khela[khelap.begin() -> second].erase(add);
                khelap.erase(khelap.begin());
            }
        }

        cout << khelap.size() << '\n';
    }
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