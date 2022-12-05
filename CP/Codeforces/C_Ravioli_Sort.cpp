#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    for(int i = 1; i < n; i += 1){
        if(abs(vc[i] - vc[i - 1]) > 1){
            cout << "NO\n";
            return;
        } 
    }

    cout << "YES\n";
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