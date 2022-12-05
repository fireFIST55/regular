#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, d; cin >> n >> m >> d;
    vector<int>lenlog(m), ans(n + 1);
    int total = 0;
    for(int &i: lenlog){
        cin >> i; total += i;
    }

    int last = 0;
    for(int i = 0; i < m; i += 1){
        int left = 1, right = d, take = 0;
        while(left <= right){
            int mid = (left + right) >> 1;
            if(last + mid + total - 1 <= n){
                take = mid; left = mid + 1;
            }
            else right = mid - 1;
        }

        if(take){
            last += take;
            for(int j = last, k = 0; k < lenlog[i]; k += 1, j += 1) ans[j] = i + 1;
            last += lenlog[i] - 1;
        }
        else{
            cout << "NO\n";
            return;
        }

        total -= lenlog[i];
    }

    if(last + d < n + 1){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i = 1; i <= n; i += 1) cout << ans[i] << " ";
    cout << "\n";
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