#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    set<pair<int, int>>khela;
    int n, m, d; cin >> n >> m >> d;
    vector<int>ans(n);
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; khela.insert({a, i});
    }

    int day = 0;
    while(!khela.empty()){
        day += 1;
        int index = khela.begin()->second, dd = khela.begin()->first; ans[index] = day;
        khela.erase(khela.begin());

        while(1 && !khela.empty()){
            auto it = khela.lower_bound({dd + d + 1, 0});
            if(it == khela.end()) break;
            ans[it->second] = day; khela.erase(it);
        }
    }

    cout << day << '\n';
    for(int i: ans) cout << i << ' ';
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