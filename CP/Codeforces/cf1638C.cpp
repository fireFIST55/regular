#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    set<int>khela;
    vector<int>vc(n), index(n + 1);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; index[vc[i]] = i;
        khela.insert(-(i + 1));
    }

    int rembg = n, cnt = 0, ans = 1, last = n - 1, mn = n;
    while(cnt < n){
        if(rembg >= mn){
            for(int i = index[rembg]; i <= last && cnt < n; i += 1){
                khela.erase(-vc[i]); mn = min(mn, vc[i]); cnt += 1;
            }
            
            last = index[rembg] - 1; rembg = -(*khela.begin());
        }
        else{
            mn = n; ans += 1;
            for(int i = index[rembg]; i <= last && cnt < n; i += 1){
                khela.erase(-vc[i]); mn = min(mn, vc[i]); cnt += 1;
            }
            
            last = index[rembg] - 1; rembg = -(*khela.begin());
        }
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}