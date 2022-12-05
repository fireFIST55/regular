#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1505;

void solve(){
    int n; 
    string s; cin >> n >> s;
    vector<vector<int>>precalc(26, vector<int>(N));

    for(int i = 0; i < 26; i += 1){
        for(int j = 0; j < n; j += 1){
            int rplc = 0;
            for(int k = j; k < n; k += 1){
                if(s[k] - 'a' != i) rplc += 1;
                precalc[i][rplc] = max(precalc[i][rplc], k - j + 1);
            }
        }
        for(int k = 1; k < N; k += 1) precalc[i][k] = max(precalc[i][k], precalc[i][k - 1]);
    }

    int q; cin >> q;
    for(int i = 0; i < q; i += 1){
        int k; char ch; cin >> k >> ch;
        cout << precalc[ch - 'a'][k] << '\n';
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