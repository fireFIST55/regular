#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool ok = 1;
    int n; cin >> n;
    stack<int>stk;
    vector<pair<char, int>>vch;
    vector<int>ans(n); 
    int curr = 0;
    for(int i = 0; i < 2 * n; i += 1){
        int x = 0;
        char ch; cin >> ch;
        if(ch == '+') stk.push(curr++);
        else{
            cin >> x;
            if(stk.empty()){
                ok = 0; continue;
            }
            ans[stk.top()] = x; stk.pop();
        }
        vch.emplace_back(ch, x);
    }

    set<int>rsrv; curr = 0;
    for(int i = 0; i < 2 * n && ok; i += 1){
        if(vch[i].first == '+')
            rsrv.insert(ans[curr++]);
        else{
            if(*rsrv.begin() == vch[i].second) rsrv.erase(rsrv.begin());
            else{
                ok = 0; continue;
            }
        }

    }

    if(!ok){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i: ans) cout << i << ' ';
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