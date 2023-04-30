#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    vector<pair<int, int>>khela;
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        int j = i + 1, cnt = 1;
        while(j < n && vc[j] == vc[i]){
            j += 1; cnt += 1;
        }
        khela.emplace_back(vc[i], cnt); i = j - 1;
    }
    int m = khela.size(), sm = 0, ans = 0;
    vector<int>suf1(m), suf2(m);
    for(int i = m - 1; i >= 0; i -= 1){
        suf1[i] = max((khela[i].first == 1?khela[i].second: 0), (i == m - 1?0: suf1[i + 1]));
        suf2[i] = max((khela[i].first == 2?khela[i].second: 0), (i == m - 1?0: suf2[i + 1]));
    }
    for(int i = 0; i < khela.size(); i += 1){
        if(i > 3) sm -= khela[i - 4].second;
        sm += khela[i].second; ans = max(ans, sm);
        if(khela[i].first == 1) ans = max(ans, khela[i].second + (i + 1 < m?suf1[i + 1]: 0));
        else ans = max(ans, khela[i].second + (i?khela[i - 1].second: 0) + (i + 1 < m?suf2[i + 1]: 0));
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}