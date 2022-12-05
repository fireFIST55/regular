#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n; cin >> n >> s;
    vector<int>plus(n);

    for(int i = 0; i < n; i += 1)
        plus[i] = (i?plus[i - 1]: 0) + (s[i] == '+');

    int ans = 0;
    for(int i = 0; i < n; i += 1){
        for(int j = i; j < n; j += 1){
            int pl = (i?plus[j] - plus[i - 1]: plus[j]), mns = (j - i + 1) - pl;
            if((mns > pl && !((mns - pl)%3)) || mns == pl) ans += 1;
        }
    }

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