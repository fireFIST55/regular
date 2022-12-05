#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n, o; cin >> n >> o >> s;
    bool pal = 1;

    for(int i = 0, j = n - 1; i < j; i += 1, j -= 1){
        if(s[i] != s[j]){
            pal = 0; break;
        }
    }

    int ans = pal?1: o >= 1?2: 1;
    cout << ans << '\n';
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