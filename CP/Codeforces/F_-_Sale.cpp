#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    int earn = 0;
    for(int i = 0; i < min(n, m) && vc[i] < 0; i += 1){
        earn += vc[i];
    }
    cout << -earn << '\n';
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