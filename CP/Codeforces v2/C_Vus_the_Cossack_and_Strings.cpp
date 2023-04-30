#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string a, b; cin >> a >> b;
    int n = a.length(), m = b.length(), ans = 0;
    vector<int>prefix1(n), prefix2(m);
    for(int i = 0; i < n; i += 1) prefix1[i] = (i?prefix1[i - 1]: 0) + (a[i] == '1');
    for(int i = 0; i < m; i += 1) prefix2[i] = (i?prefix2[i - 1]: 0) + (b[i] == '1');
    for(int i = m - 1; i < n; i += 1){
        if(((prefix1[i] - (i == m - 1?0: prefix1[i - (m - 1) - 1])) % 2) == (prefix2[m - 1] % 2)) ans += 1;
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