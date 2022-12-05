#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, total = 0;
    string s; cin >> s; n = s.length();
    vector<int>dummy(n);
    deque<int>almostZ, z;
    
    for(int i = 0; i < n; i += 1){
        if(s[i] == '0'){
            if(almostZ.empty()){
                z.push_back(++total); dummy[i] = total;
            }
            else{
                int k = almostZ.front();
                dummy[i] = k; almostZ.pop_front(); z.push_back(k);
            }
        }
        else{
            if(z.empty()){
                cout << - 1 << '\n';
                return;
            }
            else{
                int k = z.front(); z.pop_front();
                almostZ.push_back(k); dummy[i] = k;
            }
        }
    }

    if(!almostZ.empty()){
        cout << - 1 << '\n';
        return;
    }
    vector<int>ans[total + 5];
    for(int i = 0; i < n; i += 1)
        ans[dummy[i]].emplace_back(i);
    
    cout << total << '\n';
    for(int i = 1; i <= total; i += 1){
        cout << ans[i].size() << ' ';
        for(int u: ans[i]) cout << u + 1 << ' ';
        cout << '\n';
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