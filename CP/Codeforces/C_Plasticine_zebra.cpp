#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;

char khela(char ch){
    if(ch == 'w') return 'b';
    else return 'w';
}

int where(int k){
    if(k < 0) return n - 1;
    else return k;
}

void solve(){
    // bool done = 0;
    string s; cin >> s;
    int ans = 1; n = s.length();
    // vector<int>vis(n);

    for(int i = 0; i < n; i += 1){
        int k = (i + 1) % n, curr = 1;
        while(k != i && s[k] == khela(s[where(k - 1)])){
            k = (k + 1) % n; curr += 1;
            // if(vis[k]) done = 1; vis[k] = 1;
        }

        ans = max(ans, curr);
        if(k <= i) break;
        i = where(k - 1);
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