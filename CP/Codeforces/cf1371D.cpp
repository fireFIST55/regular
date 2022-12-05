#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;  cin >> n >> k;
    vector<pair<int, int>>r, c;
    vector<vector<int>>field(n, vector<int>(n));
    for(int i = 0; i < n; i += 1){
        r.emplace_back(i, 0); c.emplace_back(0, i);
    }

    int i = -1;
    while(k){
        i += 1;
        for(int j = 0; r[i].first + j < n && r[i].second + j < n && k; j += 1){
            field[r[i].first + j][r[i].second + j] = 1; k -= 1;
        }

        if(!i) continue;
        for(int j = 0; c[i].first + j < n && c[i].second + j < n && k; j += 1){
            field[c[i].first + j][c[i].second + j] = 1; k -= 1;
        }
    }

    int rmx = 0, rmn = INT_MAX;
    for(int i = 0; i < n; i += 1){
        int cnt = 0;
        for(int j = 0; j < n; j += 1){
            cnt += (field[i][j] == 1);
        }

        rmx = max(rmx, cnt); rmn = min(rmn, cnt);
    }

    int cmx = 0, cmn = INT_MAX;
    for(int i = 0; i < n; i += 1){
        int cnt = 0;
        for(int j = 0; j < n; j += 1){
            cnt += (field[j][i] == 1);
        }

        cmx = max(cmx, cnt); cmn = min(cmn, cnt);
    }
    
    cout << (rmx - rmn)*(rmx - rmn) + (cmx - cmn)*(cmx - cmn) << '\n';

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1) cout << field[i][j];
        cout << '\n';
    }
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