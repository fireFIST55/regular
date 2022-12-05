#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<ll>vc(n);

    for(ll &i: vc)  cin >> i;
    if(n == 1){
        cout << 1 << " " << 1 << '\n' << 0 << '\n';
        cout << 1 << " " << 1 << '\n' << 0 << '\n';
        cout << 1 << " " << 1 << '\n' << -vc[0] << '\n';
    }
    else{
        cout << 1 << " " << 1 << '\n' << -vc[0] << '\n';
        cout << 1 << " " << n << '\n';
        for(int i = 0; i < n; i += 1){
            i?cout << (ll)n*-vc[i]: cout << 0;
            cout << ' ';
        }
        cout << '\n';

        cout << 2 << ' ' << n << '\n';
        for(int i = 1; i < n; i += 1)   cout << (ll)(n - 1)*vc[i] << ' ';
        cout << '\n';
    }
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