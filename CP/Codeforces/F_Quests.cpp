#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, c, d; cin >> n >> c >> d;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    sort(vc.rbegin(), vc.rend());
    if(vc[0] >= c){
        cout << "Infinity\n"; 
        return;
    }
    int ans = - 1, left = 0, right = n;
    while(left <= right){
        int mid = (left + right) >> 1;
        int curr = c;
        for(int i = 0; i < d; i += 1){
            if(i % mid < n) curr -= vc[i % mid];
        }
        if(curr <= 0) left = mid + 1, ans = max(ans, mid);
        else right = mid - 1;
    }
    if(ans == - 1) cout << "Impossible\n";
    else cout << ans + 1 << '\n';
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