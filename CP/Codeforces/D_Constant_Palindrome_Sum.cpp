#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n), cnt(2 * k + 2), prefix(2 * k + 2);
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n / 2; i += 1){
        int l1 = vc[i] + 1, l2 = vc[n - i - 1] + 1;
        int r1 = vc[i] + k, r2 = vc[n - i - 1] + k;

        prefix[min(l1, l2)] += 1; prefix[max(r1, r2) + 1] -= 1; cnt[vc[i] + vc[n - i - 1]] += 1;
    }   
    //for(int i = 1; i <= 2 * k; i += 1) prefix[i] += prefix[i - 1];

    int ans = n;
    for(int i = 2; i <= 2 * k; i += 1){
        prefix[i] += prefix[i - 1];
        ans = min(ans, (prefix[i] - cnt[i]) + (n / 2 - prefix[i]) * 2); 
    }
    cout << ans << '\n';
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