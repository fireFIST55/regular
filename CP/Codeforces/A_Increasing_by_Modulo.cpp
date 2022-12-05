#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;

    function<bool(int x)> check = [&](int x){
        bool yes = 1;
        int mn = 0;
        for(int i = 0; i < n && yes; i += 1){
            if(mn > vc[i]){
                if(mn - vc[i] > x) yes = 0;
            }
            else if(mn < vc[i]){
                if((vc[i] + x) % m >= mn && vc[i] + x >= m) continue;
                mn = vc[i];
            }
        }
        return yes;
    };

    int left = 0, right = m, ans;
    while(left <= right){
        int mid = (left + right) >> 1;
        if(check(mid)) ans = mid, right = mid - 1;
        else left = mid + 1;
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