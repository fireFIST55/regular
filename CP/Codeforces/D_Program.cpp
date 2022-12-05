#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n, m; cin >> n >> m >> s;
    vector<int>preMx(1, 0), PreMn(1, 0), curr(1, 0);
    for(int i = 0; i < n; i += 1){
        int d = s[i] == '+'?1: - 1;
        curr.push_back(curr.back() + d);
        PreMn.push_back(min(PreMn.back(), curr.back()));
        preMx.push_back(max(preMx.back(), curr.back()));
    }

    vector<int>suffMx(1, 0), suffMn(1, 0);
    for(int i = n - 1; i >= 0; i -= 1){
        int d = s[i] == '+'?1: - 1;
        suffMx.push_back(max(suffMx.back() + d, 0));
        suffMn.push_back(min(suffMn.back() + d, 0));
    }
    reverse(suffMx.begin(), suffMx.end()); reverse(suffMn.begin(), suffMn.end());
    for(int i = 0; i < m; i += 1){
        int L, R; cin >> L >> R; L -= 1;
        int l = min(PreMn[L], curr[L] + suffMn[R]), r = max(preMx[L], curr[L] + suffMx[R]);
        cout << r - l + 1 << '\n';
    }
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