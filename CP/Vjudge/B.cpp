#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n){
    vector<int>vc(n + 1), check(n + 1, 1);
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; vc[a] = i + 1;
    }
    
    int ans = 0;
    for(int i = 1; i <= n; i += 1){
        int cnt = 0;
        for(int k = 1; k < vc[i]; k += 1){
            if(check[k]) cnt += 1;
        }

        check[vc[i]] = 0; ans += cnt;
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(cin >> t)
        solve(t);
    
    return 0;
}