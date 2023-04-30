#include<bits/stdc++.h>
#define ll long long
using namespace std;

int khela(int n){
    int cnt = 0; 
    while(!(n % 2)){
        n /= 2; cnt += 1;
    }
    return cnt;
}

void solve(){
    int n, have = 0, cnt = 0; cin >> n;
    vector<int>vc(n), pwr;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; have += khela(vc[i]); pwr.emplace_back(khela(i + 1));
    }
    sort(pwr.rbegin(), pwr.rend());
    int left = n - have;
    for(int i = 0; i < n && left > 0; i += 1){
        left -= pwr[i]; cnt += 1;
    }
    cout << (left > 0?- 1: cnt) << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}