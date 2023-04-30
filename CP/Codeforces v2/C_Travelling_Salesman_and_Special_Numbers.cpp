#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7;

int calc(int n){
    int op = 1;
    while(n != 1 && n >= 1){
        n = __builtin_popcount(n); op += 1;
    }
    return op;
}

void solve(){
    string s; cin >> s;
    int k, n = s.length(); cin >> k;
    vector<ll>cand, fact(1005, 1);
    for(int i = 2; i <= 1000; i += 1) fact[i] = (fact[i] * i) % MOD;
    for(int i = 1; i <= 1000; i += 1){
        if(k == calc(i)) cand.emplace_back(i);
    }
    for(int i = 0; i < n; i += 1){
        if(s[i] == '0') continue;
        for(int j = 0; j < cand.size() && cand[j] <= n - i - 1; j += 1){
            ll m = n - i - 1, tot = fact[m];
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}