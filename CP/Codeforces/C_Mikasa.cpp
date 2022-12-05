#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, ans = 0; cin >> n >> m;
    m += 1;
    for(int i = 30; i >= 0; i -= 1){
        if((n & (1 << i)) == (m & (1 << i))) continue;
        else if(n & (1 << i)) break;
        else if(m & (1 << i)) ans |= (1 << i);
    }    
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