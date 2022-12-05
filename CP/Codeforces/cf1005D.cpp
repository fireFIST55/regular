#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int curr = 0, n = s.length();
    vector<int>last(3, - 1), cnt(n);
    last[0] = 0;

    for(int i = 0; s[i]; i += 1){
        curr = (curr + s[i] - '0')%3;
        cnt[i] = i?cnt[i - 1]: 0;

        if(last[curr] != - 1) cnt[i] = max(cnt[i], cnt[last[curr]] + 1);
        last[curr] = i;
    }

    cout << cnt[n - 1] << '\n';
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