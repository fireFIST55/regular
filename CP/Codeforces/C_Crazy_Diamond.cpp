#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n + 5), pos(n + 5);
    for(int i = 1; i <= n; i += 1){
        cin >> vc[i]; pos[vc[i]] = i + 1;
    }

    function<void(int i, int j)>swp = [&](int i, int j){
        pos[vc[i]] = j; pos[vc[j]] = i; swap(vc[i], vc[j]);
    };

    int d = (n + 1) / 2;
    vector<pair<int, int>>ans;
    for(int i = 1; i <= n; i += 1){
        if(pos[i] == i) continue;
        if(pos[i] - i >= d){
            ans.emplace_back(i, pos[i]); swp(i, pos[i]); 
        }
        else{
            int j = pos[i];
            if(j + d > n){
                ans.emplace_back(j, 1); swp(j, 1);
                ans.emplace_back(1, i); swp(1, i);
                ans.emplace_back(1, j); swp(1, j);
            }
            else{
                ans.emplace_back(j, j + d); swp(j, j + d);
                ans.emplace_back(j + d, i); swp(j, j + d);
            }
        }
    }
    for(int i = 1; i <= n; i += 1) cout << vc[i] << ' ';
    cout << '\n';
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