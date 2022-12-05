#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<vector<char>>vch(n, vector<char>(m));
    map<pair<int, int>, bool>det;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            cin >> vch[i][j];
            if((!j || j == m - 1) && vch[i][j] == '.') det[{i ,j}] = 1;
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