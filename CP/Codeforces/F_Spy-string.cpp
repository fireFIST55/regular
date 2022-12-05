#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, pos; cin >> n >> m;
    string s[n];
    bool ok = 1;
    for(int i = 0; i < n; i += 1) cin >> s[i];
    for(int j = 0; j < m && ok; j += 1){
        for(int i = 1; i < n && ok; i += 1){
            if(s[i][j] != s[0][j]) ok = 0, pos = j;
        }
    }

    if(ok){
        cout << s[0] << '\n';
        return;
    }

    function<bool(string s)> khela = [&](string S){
        for(int i = 0; i < n; i += 1){
            int cnt = 0;
            for(int j = 0; j < m; j += 1){
                if(S[j] != s[i][j]) cnt += 1;
            }

            if(cnt > 1) return 0;
        }
        return 1;
    };

    vector<int>taken(26);
    for(int i = 0; i < n; i += 1){
        if(taken[s[i][pos] - 97]) continue;
        taken[s[i][pos] - 97] = 1;
        for(int k = 0; k < n; k += 1){
            if(s[k][pos] != s[i][pos]){
                string cr = s[k]; cr[pos] = s[i][pos];
                if(khela(cr)){
                    cout << cr << '\n';
                    return;
                }
            }
        }
    }
    cout << - 1 << '\n';
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