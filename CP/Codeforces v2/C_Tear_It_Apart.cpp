#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.length(), ans = n;
    for(int i = 0; i < 26; i += 1){
        int curr = 0;
        for(int j = 0; j < n; j += 1){
            if(s[j] - 97 == i) continue;
            int k = j;
            while(k + 1 < n && s[k + 1] - 97 != i) k += 1;
            int x = log2(k - j + 1) + .00001; curr = max(curr, x + 1);
            j = k;
        }
        ans = min(ans, curr);
    }
    cout << ans << '\n';
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