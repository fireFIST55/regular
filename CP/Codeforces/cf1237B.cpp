#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, mx = - 1, ans = 0;
    cin >> n;
    vector<int>a(n), b(n), left(n);
    for(int &i: a) cin >> i;
    for(int i = 0; i < n; i += 1){
        cin >> b[i];
        left[--b[i]] = i;
    }

    for(int i = 0; i < n; i += 1){
        if(i && left[--a[i]] < mx) ans += 1;
        mx = max(mx, left[a[i]]);
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}