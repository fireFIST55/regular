#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        vp.emplace_back(a, i);
    }

    sort(vp.begin(), vp.end());
    cout << vp[0].second + 1 << " " << vp[n - 1].second + 1 << '\n';
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