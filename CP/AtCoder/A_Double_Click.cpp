#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, d; cin >> n >> d;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    for(int i = 1; i < n; i += 1){
        if(vc[i] - vc[i - 1] <= d){
            cout << vc[i] << '\n';
            return;
        }
    }
    cout << - 1 << '\n';
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