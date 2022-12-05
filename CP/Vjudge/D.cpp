#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, e; cin >> n >> e;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());

    int left = 0, right = vc[n - 1] - vc[0], ans;
    while(left <= right){
        int mid = (left + right)/2, prev = vc[0], cnt = 1, curr = INT_MAX;

        while(cnt < e){
            int crr = lower_bound(vc.begin(), vc.end(), (prev + mid)) - vc.begin();
            if(crr < n){
                curr = min(curr, vc[crr] - prev);
                cnt += 1; prev = vc[crr];
            }
            else break;
        }

        if(cnt == e){
            left = mid + 1; ans = curr;
        }
        else right = mid - 1;
    }

    cout << ans << '\n';
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