#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll inf = 1e15;

void solve(){
    int n;
    cin >> n;
    
    vector< pair< int, int>> in;
    bool infinity = true;
    for(int i = 0; i < n; i += 1){
        int x, y; cin >> x >> y;
        in.emplace_back(x, y);
        if (y == 2) {
            infinity = false;
        }
    }
    
    if (infinity) {
        cout << "Infinity\n";
        return;
    }
    for (int i = 0; i + 1 < n; i++) {
        if (in[i].first >= 0 && in[i].second == 1 && in[i + 1].second == 2) {
            cout << "Impossible\n";
            return;
        }
        if (in[i].first <= 0 && in[i].second == 2 && in[i + 1].second == 1) {
            cout << "Impossible\n";
            return;
        }
    }
    
    int l = -(2e8), r = 2e8;
 
    for (pair<int, int>pi : in) {
        int x = pi.first, y = pi.second;
        if (y == 1) {
            l = max(l, 1900);
        } else {
            r = min(r, 1899);
        }
        l += x;
        r += x;
        if (l > r) {
            cout << "Impossible\n";
            return;
        }
    }
    cout << r << endl;
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