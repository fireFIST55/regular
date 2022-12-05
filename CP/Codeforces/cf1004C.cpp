#include<bits/stdc++.h>
#define ll long long
using namespace std;
int M = 1e5 + 5;

void solve(){
    int n; cin >> n;
    vector<int>vc(n), freq1(M), suffDif(n);
    for(int &i: vc) cin >> i;

    for(int i = n - 1; i >= 0; i -= 1){
        if(i != n - 1)  suffDif[i] = suffDif[i + 1];
        if(!freq1[vc[i]]) suffDif[i] += 1;
        freq1[vc[i]] = 1;
    }

    ll ans = 0;
    vector<int>freq2(M);
    for(int i = 0; i < n - 1; i += 1){
        if(freq2[vc[i]]) continue;
        ans += (ll)suffDif[i + 1]; freq2[vc[i]] = 1;
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