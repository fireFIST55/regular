#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    for(int i = k; i < n; i += 1) cout << vc[i] << ' ';
    for(int i = 0; i < min(n, k); i += 1) cout << 0 << ' ';
    cout << '\n';
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