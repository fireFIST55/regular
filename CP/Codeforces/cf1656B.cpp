#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll k;
    int n; cin >> n >> k;
    vector<ll>vc(n);
    map<ll, int>freq;

    for(ll &i: vc){
        cin >> i; freq[i] += 1;
    }

    for(int i = 0; i < n; i += 1){
        freq[vc[i]] -= 1;
        if(freq[vc[i] - k]){
            cout << "YES\n";
            return;
        }

        freq[vc[i]] += 1;
    }

    cout << "NO\n";
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