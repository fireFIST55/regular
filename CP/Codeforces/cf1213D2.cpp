#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 2e5 + 5;
vector<int>khela[M];

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n);;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];

        int cnt = 0;
        while(vc[i]){
            khela[vc[i]].push_back(cnt++);
            vc[i] /= 2;
        }

        khela[vc[i]].push_back(cnt);
    }

    bool no = 1;
    int ans = INT_MAX;
    for(int i = 0; i < M; i += 1){
        if(khela[i].size() >= k){
            int curr = 0; no = 0;
            sort(khela[i].begin(), khela[i].end());
            for(int j = 0; j < k; j += 1){
                curr += khela[i][j];
            }

            ans = min(curr, ans);
        }
    }

    cout << ans << '\n';
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