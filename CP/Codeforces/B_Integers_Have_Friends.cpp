#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n;
    vector<ll>vc(n), realdl; m = log2(max(1, (n - 1))) + 5;
    vector<vector<ll>>khela(n, vector<ll>(m, 0));
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; 
        if(i){
            realdl.emplace_back(abs(vc[i] - vc[i - 1]));
            khela[i - 1][0] = realdl.back();
        }
    }
    if(n == 1){
        cout << 1 << '\n';
        return;
    }
    for(int sz = 1; sz < m; sz += 1){
        for(int index = 0; index + (1 << sz) - 1 < n - 1; index += 1) khela[index][sz] = __gcd(khela[index][sz - 1], khela[index + (1 << (sz - 1))][sz - 1]);
    }

    function<bool(int l, int r)>check = [&](int l, int r){
        int x = r - l + 1, sz = log2(x) + 1; ll res = 0;
        bool yes = 1; 
        for(int k = 0; k < sz && l < n - 1; k += 1){
            if(!khela[l][k]) break;
            if(x & (1 << k)) res = __gcd(res, khela[l][k]);
            l += (1 << k);
        }
        if(res == 1) yes = 0;
        return yes;
    };

    int ans = 0;
    for(int i = 0; i < n - 1; i += 1){
        int left = i, right = n - 2;
        while(left <= right){
            int mid = (left + right) >> 1;
            if(check(i, mid)){
                ans = max(ans, mid - i + 1); left = mid + 1;
            }
            else right = mid - 1;
        }
    }
    cout << ans + 1 << '\n';
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