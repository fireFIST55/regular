#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>ans(n);

    int xorod = 0;
    for(int i = 1, x = 1; i < n; i += 2, x += 2){
        ans[i] = x; xorod ^= ans[i];
        if(i + 2 >= n){
            if(!xorod){
                xorod ^= ans[i];
                ans[i] |= (1 << 30); xorod ^= ans[i];
            }
        }
    }
    //cout << xorod << endl;

    int xorev = 0;
    for(int i = 4, x = 2; i < n; i += 2, x += 2){
        ans[i] = x; xorev ^= ans[i];
        if(i + 2 >= n){
            if(xorod == xorev){
                xorev ^= ans[i]; 
                ans[i] |= (1 << 30); xorev ^= ans[i];
            }
        }
    }

    for(int i = 30; i >= 0; i -= 1){
        if((xorod & (1 << i)) == (xorev & (1 << i))){
            if(i) ans[2] |= (1 << i), ans[0] |= (1 << i);
        }
        else    ans[0] |= (1 << i); 
    }
    xorev ^= ans[0]; xorev ^= ans[2];
    //cout << xorev << endl;
    for(int i: ans) cout << i << ' ';
    cout << endl;
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