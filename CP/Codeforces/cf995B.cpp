#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0; cin >> n; 
    vector<int>vc(2*n);
    for(int &i: vc) cin >> i;

    for(int i = 0; i < 2*n; i += 1){
        if(vc[i] == vc[i + 1]) i += 1;
        else if(vc[i]){
            int cnt = 0;
            for(int j = i + 1; j < 2*n; j += 1){
                if(vc[i] == vc[j]){
                    vc[j] = 0; break;
                }
                else if(vc[j]) cnt += 1;
            }

            ans += cnt;
        }
    }

    cout << ans << '\n';
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