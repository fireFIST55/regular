#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, mn = INT_MAX; cin >> n;
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; mn = min(mn, vc[i]);
    }
    cout << (mn >= vc[0]?"Bob\n": "Alice\n");
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}