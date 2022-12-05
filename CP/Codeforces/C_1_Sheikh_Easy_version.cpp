#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    vector<ll>vc(n), prefixSm(n), prefixXr(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        prefixSm[i] = (i?prefixSm[i - 1]: 0) + vc[i];
        prefixXr[i] = (i?prefixXr[i - 1]: 0) ^ vc[i];
    }
    int a, b; cin >> a >> b;

    function<ll(int l, int r)>calc = [&](int l, int r){
        ll s = prefixSm[r] - (l?prefixSm[l - 1]: 0);
        ll x = prefixXr[r] ^ (l?prefixXr[l - 1]: 0);

        return s - x;
    };


    int L = 1, R = n;
    ll mx = calc(0, n - 1);
    for(int i = 0; i < n; i += 1){
        int l = i, r = n - 1, take = - 1;
        while(l <= r){
            int mid = (l + r) >> 1;
            if(calc(i, mid) >= mx){
                take = mid; r = mid - 1;
            }
            else l = mid + 1;
        }
        if(take != - 1 && (take - i + 1) < R - L + 1){
            L = i + 1, R = take + 1; 
        }
    }
    cout << L << " " << R << '\n';
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