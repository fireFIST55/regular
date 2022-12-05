#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    int n, m; cin >> n >> m;
    vector<vector<int>>freq1(m + 5, vector<int>(26, 0)), freq2(m + 5, vector<int>(26, 0));
    for(int i = 0; i < n; i += 1){
        string s; cin >> s;
        for(int k = 0; k < m; k += 1){
            freq1[k][s[k] - 97] += 1;
        }
    }

    for(int i = 0; i < n - 1; i += 1){
        string s; cin >> s;

        for(int k = 0; k < m; k += 1){
            freq2[k][s[k] - 97] += 1;
        }
    }

    string ans;
    for(int i = 0; i < m; i += 1){
        for(int k = 0; k < 26; k += 1){
            if(freq1[i][k] != freq2[i][k]){
                ans  += ('a' + k);
                break;
            }
        }
    }

    cout << ans << endl;
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