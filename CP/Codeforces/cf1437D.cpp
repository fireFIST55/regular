#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>vc(n);
    for(int &X: vc) cin >> X;
    int limit = 1, ans = 0, curr;
    
    for(int i = 1; i < n; i += 1){
        curr = 1;

        while(limit--){
            while(i + 1 < n && vc[i] < vc[i + 1]) i += 1, curr += 1;
            i += 1;
            curr += 1;
        }
        curr -= 1;
        i -= 1;

        limit = curr;
        ans += 1;
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