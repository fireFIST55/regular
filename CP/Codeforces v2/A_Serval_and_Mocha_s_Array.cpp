#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        ll g = vc[i];
        for(int j = i + 1; j < n; j += 1){
            if(__gcd(g, (ll)vc[j]) <= 2){
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
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