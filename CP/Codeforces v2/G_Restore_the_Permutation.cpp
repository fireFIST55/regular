#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vis(n + 5), b(n / 2), ans(n);
    set<int>unused;
    for(int i = 0; i < n / 2; i += 1){
        cin >> b[i]; ans[(i << 1) + 1] = b[i];
        vis[b[i]] = 1;
    }
    for(int i = 1; i <= n; i += 1){
        if(!vis[i]) unused.insert(i);
    }

    if(unused.size() != n / 2){
        cout << - 1 << '\n';
        return;
    }
    for(int i = n / 2 - 1; i >= 0; i -= 1){
        auto it = unused.upper_bound(b[i]);
        if(it == unused.begin()){
            cout << - 1 << '\n';
            return;
        }

        it--;
        if(*it < b[i]){
            ans[(i << 1)] = *it; unused.erase(it);
        }
        else{
            cout << - 1 << '\n';
            return;
        }
    }
    for(int i: ans) cout << i << " ";
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}