#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>d(2*n);
    set<ll>st;
    for(int i = 0; i < 2 * n; i += 1){
        ll a; cin >> a; st.insert(a);
    }

    if(st.size() != n){
        cout << "NO\n";
        return;
    }

    vector<ll>vc; 
    for(auto it: st){
        vc.emplace_back(it);
    }

    ll sum = 0;
    for(int i = n - 1; i >= 0; i -= 1){
        vc[i] -= sum;
        if(vc[i] <= 0 || (vc[i] % (2 * (i + 1)))){
            cout << "NO\n";
            return;
        }
        vc[i] /= (2 * (i + 1));
        sum += (2 * vc[i]);
    }
    cout << "YES\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}