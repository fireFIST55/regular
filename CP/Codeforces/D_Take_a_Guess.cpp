#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll askAdd(ll a, ll b){
    cout << "and " << a << " " << b << endl;
    ll x; cin >> x;
    cout << "or " << a << " " << b << endl;
    ll y; cin >> y;
    ll res = (x | y) + (x & y);
    return res;
}

void solve(){
    int n, k; cin >> n >> k;
    vector<ll>ans(n);
    ll x = askAdd(1, 2), y = askAdd(2, 3), z = askAdd(1, 3);
    ans[0] = ((x - y) + z) / 2, ans[1] = ((y - z) + x) / 2, ans[2] = ((z - x) + y) / 2;
    for(int i = 3; i < n; i += 1){
        cout << "and " << 1 << " " << i + 1 << endl; cin >> x;
        cout << "or " << 1 << " " << i + 1 << endl; cin >> y;
        ans[i] = x | (y ^ ans[0]);
    }
    sort(ans.begin(), ans.end());
    cout << "finish " << ans[k - 1] << endl;
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