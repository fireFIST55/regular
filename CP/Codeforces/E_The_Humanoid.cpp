#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, two = 2, three = 1, ans = 0; ll h; cin >> n >> h;
    vector<ll>vc, serums{2, 2, 3};
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        if(a == 1){
            ans += 1; continue;
        }
        vc.emplace_back(a);
    }
    sort(vc.begin(), vc.end());
    n = vc.size();
    for(int i = 0; i < n; i += 1){
        if(h <= vc[i]){
            int m = serums.size();
            vector<int>moves;
            for(int k = 1; k < (1 << m); k += 1){
                ll curr = 1;
                for(int j = 0; j < m; j += 1){
                    if(k & (1 << j)) curr *= serums[j];
                }
                moves.emplace_back(curr);
            }

            bool yes = 0;
            sort(moves.begin(), moves.end());
            for(int k = 0; k < moves.size() && !yes; k += 1){
                if(h * moves[k] > vc[i]){
                    vector<int>dl;
                    for(int j = 0; j < m; j += 1){
                        if(moves[k] & (1 << j)) dl.emplace_back(serums[j]);
                    }
                    for(int i: dl) serums.erase(find(serums.begin(), serums.end(), i));
                    ans += 1; yes = 1; h += (vc[i] / 2);
                }
            }
        }
        else h += (vc[i] / 2), ans += 1;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}