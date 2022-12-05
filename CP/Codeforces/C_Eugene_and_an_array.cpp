#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n), prefix(n + 1, 0);
    for(ll &i: vc) cin >> i;
    for(int i = 1; i <= n; i += 1) prefix[i] = prefix[i - 1] + vc[i - 1];
    
    int start = 0, end = 0; ll ans = 0;
    set<ll>taken = {0};
    while(start < n){
        while(end < n && !taken.count(prefix[end + 1])){
            end += 1;
            taken.insert(prefix[end]);
        }

        ans += (end - start); taken.erase(prefix[start]); start += 1;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}