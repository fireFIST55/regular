#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, sm = 0; cin >> n >> m;
    vector<int>khela(105), ans(n);
    for(int i = 0; i < n; i += 1){
        int a, need, answ = 0; cin >> a; sm += a, need = sm - m;
        if(sm <= m){
            khela[a] += 1;
            ans[i] = 0; continue;
        }
        for(int k = 100; k >= 1 && need >= 0; k -= 1){
            if(!khela[k]) continue;
            int x = (need >= khela[k] * k?khela[k]: (need + k - 1) / k);
            need -= x * k; answ += x;
        }
        ans[i] = answ; khela[a] += 1;
    }
    for(int i: ans) cout << i << ' ';
    cout << '\n';
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