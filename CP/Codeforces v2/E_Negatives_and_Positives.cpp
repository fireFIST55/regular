#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, minus = 0, mn = INT_MAX; cin >> n;
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        minus += (a < 0); vc[i] = abs(a);
    }
    sort(vc.begin(), vc.end());
    ll sum = 0;
    for(int i = 0; i < n; i += 1){
        if(!i && (minus & 1)) sum += (ll) ((ll)(- 1) * vc[i]);
        else sum += (ll) vc[i];
    }
    cout << sum << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}