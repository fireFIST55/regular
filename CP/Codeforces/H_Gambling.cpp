#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;

    vector<int>dp(n, 1);
    map<int, int>pos;
    int mx = 0, index = - 1;
    for(int i = 0; i < n; i += 1){
        if(pos.count(vc[i])) dp[i] = max(dp[i], dp[pos[vc[i]]] + 1 - (i - pos[vc[i]] - 1));
        pos[vc[i]] = i;

        if(mx < dp[i]){
            mx = dp[i]; index = i;
        }
    }

    int l = index, r = index;
    while(mx){
        if(vc[index] == vc[l]) mx -= 1;
        else mx += 1;
        
        l -= 1;
    }

    cout << vc[index] << " " << l + 2 << " " << r + 1 << '\n';
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