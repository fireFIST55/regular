#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    int ans;
    for(int i = 0; i <= vc[0]; i += 1){
        int curr = 0;
        for(int j = 0; j < n; j += 1){
            curr = max(curr, vc[j]/min(k, (i?vc[j]/i: 1)) - i);
        }

        ans = i?min(curr, ans): curr;
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