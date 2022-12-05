#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    set<pair<int, int>>khela[3];
    vector<int>dx{1, - 1, 0, 0}, dy{0, 0, 1, - 1};
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            khela[0].insert({i, j}); khela[1].insert({i, j}); khela[2].insert({i, j});
        }
    }

    for(int i = 0; i < n * n; i += 1){
        int a; cin >> a; a -= 1;
        for(int k = 0; k < 3; k += 1){
            if(k == a || khela[k].empty()) continue;
            pair<int, int>pi = *khela[k].begin();
            cout << k + 1 << " " << pi.first << " " << pi.second << endl;
            
            for(int j = 0; j < 3; j += 1){
                auto it = khela[j].find(pi);
                if(it != khela[j].end()) khela[j].erase(pi);
            }
            for(int j = 0; j < 4; j += 1){
                if(pi.first + dx[j] > 0 && pi.first + dx[j] < n + 1 && pi.second + dy[j] > 0 && pi.second + dy[j] < n + 1){
                    auto it = khela[k].find({pi.first + dx[j], pi.second + dy[j]});
                    if(it != khela[k].end()) khela[k].erase({pi.first + dx[j], pi.second + dy[j]});
                }
            }
            break;
        }
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