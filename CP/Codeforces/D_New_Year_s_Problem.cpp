#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int m, n; cin >> m >> n;
    vector<vector<int>>vc(m, vector<int>(n));
    for(int i = 0; i < m; i += 1){
        for(int &j: vc[i]) cin >> j;
    }

    int left = 1, right = 1e9, ans;
    while(left <= right){
        bool yes = 0;
        int mid = (left + right) >> 1, total = 0;
        vector<int>khela(n + 5);

        for(int i = 0; i < m; i += 1){
            int cnt = 0;
            for(int j = 0; j < n; j += 1){
                if(vc[i][j] < mid) continue;
                if(!khela[j]) total += 1;
                khela[j] = 1; cnt += 1; 
            }
            if(cnt > 1) yes = 1;
        }
        if(yes && total == n){
            ans = mid; left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << ans << '\n';
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