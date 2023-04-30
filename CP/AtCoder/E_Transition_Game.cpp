#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0; cin >> n;
    vector<int>vc(n + 5), vis(n + 5, - 1);
    for(int i = 1; i <= n; i += 1) cin >> vc[i];
    for(int i = 1; i <= n; i += 1){
        int j = i;
        while(vis[j] == - 1){
            vis[j] = i; j = vc[j];
        }
        if(vis[j] == i){
            int t = j;
            do{
                t = vc[t]; ans += 1;
            }while(t != j);
        }
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