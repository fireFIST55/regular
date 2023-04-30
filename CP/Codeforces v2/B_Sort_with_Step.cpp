#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool done = 0;
    int n, k; cin >> n >> k;
    vector<int>vc(n), vis(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; --vc[i];
    }
    for(int i = 0; i < n; i += 1){
        if(vis[i]) continue;
        int j = i, prev = - 1;
        while(!vis[j]){
            int l = vc[j];
            if(abs(l - vc[j]) % k){
                if(!done) swap(vc[j], vc[l]), done = 1;
            }
        }
    }
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