#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(2 * n);
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());

    function<bool(int i)> khela = [&](int i){
        multiset<int>ms;
        for(int k: vc) ms.insert(k);

        vector<pair<int, int>>ans;
        int need = vc[2 * n - 1] + vc[i];
        for(int k = 0; k < n; k += 1){
            auto it1 = ms.end(); it1 --;
            int y = need - *it1; ms.erase(it1); 
            auto it2 = ms.find(y);
            if(it2 == ms.end()){
                return 0;
            }
            ans.emplace_back(need - y, y);

            need = max(y, need - y); ms.erase(it2); 
        }
        cout << "YES\n";
        cout << vc[2 * n - 1] + vc[i] << '\n';
        for(auto it: ans) cout << it.first << " " << it.second << '\n'; 
        return 1;
    };

    for(int i = 0; i < 2 * n - 1; i += 1){
        bool hae = khela(i);
        if(hae) return;
    }
    cout << "NO\n";
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