#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>sub[m + 1];
    for(int i = 0; i < n; i += 1){
        int a, b; cin >> a >> b;
        sub[a].push_back(b);
    }

    for(int i = 1; i <= m; i += 1)
        sort(sub[i].begin(), sub[i].end(), greater<int>());

    vector<int>mx(n + 5);
    for(int sb = 1; sb <= m; sb += 1){
        int curr = 0;
        for(int i = 0; i < sub[sb].size(); i += 1){
            curr += sub[sb][i];
            if(curr < 0) break;

            mx[i] += curr;
        }
    }

    cout << *max_element(mx.begin(), mx.end()) << '\n';
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