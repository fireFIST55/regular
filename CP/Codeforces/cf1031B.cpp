#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
vector<int>ans(1e5 + 1), a(1e5), b(1e5);

bool khelawith(int x){
    ans[0] = x;
    for(int i = 1; i <= n; i += 1){
        ans[i] = b[i - 1];

        for(int k = 0; k < 3; k += 1){
            if(!(a[i - 1] & (1 << k)) && ((ans[i] & (1 << k)) || (ans[i - 1] & (1 << k)))) return 0;
            else if((a[i - 1] & (1 << k)) && !(ans[i] & (1 << k)) && !(ans[i - 1] & (1 << k))) ans[i] = (ans[i] | (1 << k));
        }

        if(((ans[i] & ans[i - 1]) != b[i - 1]) || (ans[i] | ans[i - 1] != a[i - 1])) return 0;
    }

    return 1;
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];
    for(int i = 0; i < n; i += 1) cin >> b[i];

    for(int i = 0; i < 4; i += 1){
        if(khelawith(i)){
            cout << "YES\n";
            for(int k = 0; k <= n; k += 1) cout << ans[k] << ' ';
            return;
        }
    }

    cout << "NO\n";
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