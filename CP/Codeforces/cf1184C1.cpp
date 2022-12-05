#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, mxx = 0, mxy = 0, mnx = 51, mny = 51; cin >> n;
    pair<int, int>mxxP, mxyP, mnxP, mnyP;
    vector<int>frqx(51), frqy(51);
    vector<pair<int, int>>vp;

    for(int i = 0; i < 4*n + 1; i += 1){
        int x, y; cin >> x >> y;
        vp.emplace_back(x, y);

        if(mxx < x){
            mxx = x; mxxP = make_pair(x, y);
        }
        if(mnx > x){
            mnx = x; mnxP = make_pair(x, y);
        }
        if(mxy < y){
            mxy = y; mxyP = make_pair(x, y);
        }
        if(mny > y){
            mny = y; mnyP = make_pair(x, y);
        }

        frqx[x] += 1; frqy[y] += 1;
    }

    if(frqx[mxx] == 1) cout << mxxP.first << " " << mxxP.second << '\n';
    else if(frqx[mnx] == 1) cout << mnxP.first << " " << mnxP.second << '\n';
    else if(frqy[mxy] == 1) cout << mxyP.first << " " << mxyP.second << '\n';
    else if(frqy[mny] == 1) cout << mnyP.first << " " << mnyP.second << '\n';
    else{
        for(int i = 0; i < 4*n + 1; i += 1){
            if((vp[i].first != mxx && vp[i].first != mnx) && (vp[i].second != mxy && vp[i].second != mny)){
                cout << vp[i].first << " " << vp[i].second << '\n';
                return;
            }
        }
    }
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