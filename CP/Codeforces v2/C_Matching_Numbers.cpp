#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int l = 1, r = 2 * n;
    vector<int>vis(2 * n + 5, 0), left;
    vector<pair<int, int>>ans;
    for(int i = l; i < r; i += 1, r -= 2){
        ans.emplace_back(i, r); vis[i] = vis[r] = 1;
    }
    for(int i = 1; i <= 2 * n; i += 1){
        if(vis[i]) continue;
        left.emplace_back(i);
    }
    int m = left.size();
    for(int i = (m / 2), j = (m / 2) - 1; i < m && j >= 0; i += 1, j -= 1){
        ans.emplace_back(left[i], left[j]);
    }
    vector<int>check;
    for(pair<int, int>p: ans) check.emplace_back(p.first + p.second);
    sort(check.begin(), check.end());
    for(int i = 1; i < check.size(); i += 1){
        if(check[i] - check[i - 1] != 1){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
    for(pair<int, int>p: ans) cout << p.first << " " << p.second << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}