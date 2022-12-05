#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    multiset<int>b;
    vector<int>a(n), ans(n);
    for(int &i: a) cin >> i;
    for(int i = 0; i < n; i += 1){
        int u; cin >> u; b.insert(u);
    }

    for(int i = 0; i < n; i += 1){
        int x = n - a[i];
        auto pos = b.lower_bound(x);
        if(pos == b.end()){
            ans[i] = (*b.begin() + a[i]) % n; b.erase(b.begin());
        }
        else{
            ans[i] = (*pos + a[i]) % n; b.erase(b.find(*pos));
        }
    }
    for(int i: ans) cout << i << ' ';
    cout << '\n';
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