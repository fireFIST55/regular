#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0, mx = 0; cin >> n;
    vector<int>vc(n);
    for(int &i: vc){
        cin >> i; mx = max(mx, i);
    }

    for(int i = 0; i < n; i += 1){
        for(int k = 1; vc[i]*k <= 2*n; k += 1){
            int pos = vc[i]*k - i - 1;
            if(pos > n || vc[i]*k > mx) break;
            else if(pos > i && vc[pos - 1] == k) ans += 1;
        }
    }

    cout << ans << '\n';
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