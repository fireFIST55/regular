#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>freq(55), khela(55);
    for(int i = 0; i < n; i += 1){
        int l, r; cin >> l >> r;
        if(k >= l && r >= k){
            khela[l] += 1; khela[r + 1] -= 1;
        }
    }
    for(int i = 1; i <= 50; i += 1){
        khela[i] += khela[i - 1]; freq[i] = khela[i];
    } 
    bool no = 0;
    int mx = freq[k];
    for(int i = 1; i <= 50; i += 1){
        if(mx <= freq[i] && i != k) no = 1;
    }
    cout << (no?"NO\n": "YES\n");
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