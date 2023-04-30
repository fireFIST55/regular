#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, d, ans = INT_MAX; cin >> n >> m >> d;
    vector<int>vc(n), a(m), pos(n + 5);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; pos[vc[i]] = i;
    }
    for(int &i: a) cin >> i;
    for(int i = 1; i < m; i += 1){
        if(pos[a[i]] < pos[a[i - 1]] || abs(pos[a[i]] - pos[a[i - 1]]) > d){
            ans = 0; break;
        }
        ans = min(ans, abs(pos[a[i]] - pos[a[i - 1]]) + 1);
        int x = d - (pos[a[i]] - pos[a[i - 1]]);
        if(n - 1 - pos[a[i]] + pos[a[i - 1]] + abs((pos[a[i]] - pos[a[i - 1]])) - 1 >= x) ans = min(ans, x); 
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