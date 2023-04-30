#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<vector<int>>ans(n, vector<int>(n));
    int l = n * n, r = 1;
    for(int i = 0, cnt = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            ans[i][j] = (cnt & 1)?r++: l--;
            cnt += 1;
        }
    }
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            if(i & 1) cout << ans[i][n - j - 1];
            else cout << ans[i][j];
            cout << ' ';
        }
        cout << '\n';
    }
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