#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0; cin >> n;
    vector<int>vc(n);
    map<int, int>freq;
    for(int &i: vc) cin >> i, freq[i] += 1;
    for(pair<int, int>pi: freq) ans += pi.second / 2;
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}