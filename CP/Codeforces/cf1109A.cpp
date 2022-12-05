#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n), dp(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; dp[i] = (i?dp[i - 1]: 0) ^ vc[i];
    }

    int funny = 0;
    for(int i = 0; i < n; i += 1){
        for(int j = i + 1; j < n; j += 2){
            int mid = (j - i)/2, r = dp[j] ^ dp[j - mid - 1], l = dp[j - mid - 1] ^ (j - 2*mid - 2 >= 0?dp[j - 2*mid - 2]: 0);
            if(l == r) funny += 1;
        }
    }

    cout << funny << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}