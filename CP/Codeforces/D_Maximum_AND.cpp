#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>a(n), b(n);
    for(int &i: a) cin >> i;
    for(int &i: b) cin >> i;

    function<bool(int curr)>check = [&](int curr){
        map<int, int>khela;
        for(int i = 0; i < n; i += 1) khela[(curr & a[i])] += 1;
        for(int i = 0; i < n; i += 1) khela[(curr & ~b[i])] -= 1;

        bool ok = 1;
        for(auto it: khela) ok &= (it.second == 0);
        return ok; 
    };

    int ans = 0;
    for(int i = 29; i >= 0; i -= 1){
        if(check(ans | (1 << i))) ans |= (1 << i);
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