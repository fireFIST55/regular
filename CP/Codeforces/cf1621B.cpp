#include<bits/stdc++.h>
#define ll long long
using namespace std;

int fnmn(int mn, int l, int mnC, int c){
    if(mn == l) return min(mnC, c);
    else return c;
}

int fnmx(int mx, int r, int mxC, int c){
    if(mx == r) mxC = min(mxC, c);
    else mxC = c;

    return mxC;
}

void solve(){
    int l, r, c, n, mn = INT_MAX, mx = INT_MIN, mnC = INT_MAX, mxC = INT_MAX, mxlen = 0;
    cin >> n;
    int cst = INT_MAX;

    for(int i = 0; i < n; i += 1){
        cin >> l >> r >> c;
        if(mn >= l && mx <= r){
            if(mn >= l) mnC = fnmn(mn, l, mnC, c);

            if(mx <= r) mxC = fnmx(mx, r, mxC, c);

            if(mxlen == r - l + 1) cst = min(cst, c);
            else cst = c;
            mxlen = max(r - l + 1, mxlen);
            mn = l;
            mx = r;
        }
        else if(mn >= l || mx <= r){
            int cost = 0, x, y;
            if(mn >= l){
                mnC = cost = fnmn(mn, l, mnC, c);
                mn = l;
            }
            else cost = mnC;

            if(mx <= r){
                cost += mxC = fnmx(mx, r, mxC, c);
                mx = r;
            }
            else cost += mxC;
            if(mxlen == mx - mn + 1) cst = min(cst, cost);
            else cst = cost;

            mxlen = max(mx - mn + 1, mxlen);
        }

        cout << cst << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}