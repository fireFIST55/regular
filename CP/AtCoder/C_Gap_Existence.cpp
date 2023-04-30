#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    map<int, int>mp;
    vector<int>vc(n);
    for(int &i: vc) cin >> i, mp[i] = 1;
    for(int i = 0; i < n; i += 1){
        if(mp[vc[i] + k]){
            cout << "Yes\n";
            return;
        }
        mp[vc[i]] = 1;
    }
    cout << "No\n";
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