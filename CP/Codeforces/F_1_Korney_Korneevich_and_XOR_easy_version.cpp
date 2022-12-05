#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1 << 13;

void solve(){
    int n, cnt = 1; cin >> n;
    vector<int>vc(n), khela[N], left(N, N), ans(N); ans[0] = 1;
    for(int &i: vc) cin >> i;
    for(int i = 0; i < N; i += 1)
        khela[i].emplace_back(0);
    for(int i = 0; i < n; i += 1){
        for(int key: khela[vc[i]]){
            int x = key ^ vc[i];
            cnt += (!ans[x]); ans[x] = 1;
            while(left[x] > vc[i]){
                left[x]--;
                if(left[x] != vc[i]) khela[left[x]].emplace_back(x); 
            }
        }
        khela[vc[i]] = {};
    }
    cout << cnt << '\n';
    for(int i = 0; i < N; i += 1){
        if(ans[i] == 1) cout << i << ' ';
    }
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