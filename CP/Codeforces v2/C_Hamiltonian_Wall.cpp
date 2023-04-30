#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s[2]; cin >> s[0] >> s[1];
    for(int i = 0; i < 2; i += 1){
        bool ok = 1; int k = i; 
        for(int j = 0; j < n; j += 1){
            if(s[k][j] != 'B') ok = 0;
            if(s[k ^ 1][j] == 'B') k ^= 1;
        }
        if(ok){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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