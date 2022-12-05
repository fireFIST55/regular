#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n; cin >> n >> s;
    vector<int>fpos(n + 1, 1), prefix(n + 1), suffix(n + 1);
    for(int i = n - 1; i >= 0; i -= 1){
        if(i + 1 < s.length() && s[i] != s[i + 1]) suffix[i] += 1 + suffix[i + 1];
        if(s[i] == 'R') fpos[i] += 1 + suffix[i];
    }

    for(int i = 1; i < n + 1; i += 1){
        if(i - 2 >= 0 && s[i - 1] != s[i - 2]) prefix[i] += 1 + prefix[i - 1];
        if(s[i - 1] == 'L') fpos[i] += 1 + prefix[i];
    }

    for(int i: fpos) cout << i << ' ';
    cout << '\n';
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