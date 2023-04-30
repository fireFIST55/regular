#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
const int N = 2e5 + 5;
vector<int>vcxor(N), vcor(N);

ll calc(int c){
    ll res = 0;
    vector<int>dummy;
    for(int i = 0; i < n; i += 1){
        if((vcor[i] >> c & 1 ^ 1)) dummy.emplace_back(vcxor[i]);
    }
    int khela = ((1 << 26) - 1) ^ (1 << c);
    sort(dummy.begin(), dummy.end());
    for(int i = 0; i < dummy.size(); i += 1){
        auto start = lower_bound(dummy.begin(), dummy.end(), dummy[i] ^ khela);
        auto finish = upper_bound(dummy.begin(), dummy.end(), dummy[i] ^ khela);
        res = res + (finish - start); 
    }
    return res >> 1LL;
}

void solve(){
    cin >> n;
    ll ans = 0;
    for(int i = 0; i < n; i += 1){
        string s; cin >> s;
        for(char ch: s){
            vcxor[i] ^= (1 << (ch - 'a'));
            vcor[i] |= (1 << (ch - 'a'));
        }
    }
    for(int i = 0; i < 26; i += 1){
        ans += calc(i);
    }
    cout << ans << '\n';
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