#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 15000000;
vector<int>prime(N + 5);

void solve(){
    int n, g = 0; cin >> n;
    for(int i = 1; i <= N; i += 1) prime[i] = i;
    for(int i = 2; i <= N; i += 1){
        if(prime[i] != i) continue;
        for(int j = i; j <= N; j += i) prime[j] = min(prime[j], i);
    }
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; g = __gcd(g, vc[i]);
    }
    map<int, int>cnt; int mx = 0;
    for(int i = 0; i < n; i += 1){
        vc[i] /= g;
        while(vc[i] > 1){
            int x = prime[vc[i]]; cnt[x] += 1;
            while(vc[i] > 1 && prime[vc[i]] == x) vc[i] /= prime[vc[i]];
            mx = max(mx, cnt[x]);
        }
    }
    cout << (mx?n - mx: - 1) << '\n';
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