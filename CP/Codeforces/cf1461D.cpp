#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll>vc(n), dp(n, 0);
    map<ll, int> khela;

    for(ll &X: vc) cin >> X;
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i += 1){
        dp[i] = i?dp[i - 1] + vc[i]: vc[i];
    }
    khela[dp[n - 1]] = 1;

    deque< pair<int, int> >dq;
    dq.push_back({0, n - 1});

    while(!dq.empty()){
        pair< int, int > pi = dq.back();
        dq.pop_back();
        int l = pi.first, r = pi.second;
        ll x = (vc[l] + vc[r])/2;
        if(l - 1 >= 0)  khela[dp[r] - dp[l - 1]] = 1;
        else khela[dp[r]] = 1;

        int index = - 1, left = l, right = r, mid;
        while(left <= right){
            mid = (left + right) >> 1;
            if(vc[mid] <= x) index = mid, left = mid + 1;
            else right = mid - 1;
        }
        // cout << "Index :\t" << index << " Value:\t" << x << endl;
        
        if(index == - 1 || index == r)  continue;
        dq.push_back({l, index});
        dq.push_back({index + 1, r});
    }

    ll a;
    for(int i = 1; i <= q; i += 1){
        cin >> a;
        if(khela[a]) cout << "Yes\n";
        else cout << "No\n";
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}