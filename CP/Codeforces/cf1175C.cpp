#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;

    pair<int, int> ans = {INT_MAX, vc[n - 1]};
    for(int i = 0; i < n - k; i += 1){
        int dist = vc[i + k] - vc[i];
        ans = min(ans, make_pair(dist, vc[i] + dist/2));
    }

    cout << ans.second << '\n';
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