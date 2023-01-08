#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, last = 0; cin >> n >> k;
    vector<int>vc(n), seen(n + 5);
    for(int &i: vc) cin >> i;
    for(int i = n - 1, need = n; i >= 0; i -= 1){
        if(seen[vc[i]]) continue;
        else if(vc[i] != need){
            last = n - need + 1; 
            seen[need--] = 1; i += 1;
        }
        else need -= 1;
    }
    int ans = (last / k) + ((last % k)?1: 0);
    cout << ans << '\n';
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