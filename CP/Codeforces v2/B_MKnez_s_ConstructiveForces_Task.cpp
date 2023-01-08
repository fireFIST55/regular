#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    if(!(n & 1)){
        cout << "YES\n";
        int ans = 0;
        for(int i = 1; i <= n; i += 1){
            ans += ((i & 1)?1: - 1);
            if(i & 1) cout << 1 << ' ';
            else cout << - 1 << ' ';
        }
        cout << '\n';
        cout << ans << endl << endl;
    }
    else cout << "NO\n";
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