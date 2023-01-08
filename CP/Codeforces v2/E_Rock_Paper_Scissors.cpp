#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>alice(3), bob(3);
    for(int &i: alice) cin >> i;
    for(int &i: bob) cin >> i;
    function<int(vector<int>x, vector<int>y)>khela = [&](vector<int>x, vector<int>y){
        int win = 0, draw = 0;
        for(int i = 0; i < 3; i += 1){
            int w = min(x[i], y[(i + 1) % 3]); win += w; x[i] -= w; y[(i + 1) % 3] -= w;
        }
        return win;
    };

    vector<pair<int, int>>moves{{0, 0}, {1, 1}, {2, 2}, {0, 2}, {1, 0}, {2, 1}};
    //sort(moves.begin(), moves.end());
    function<int(vector<int>x, vector<int>y)>calcMN = [&](vector<int>x, vector<int>y){
        int ans = INT_MAX;
        do{
            int curr = 0;
            vector<int>a = x;
            vector<int>b = y;
            for(pair<int, int>pi: moves){
                int wd = min(a[pi.first], b[pi.second]); a[pi.first] -= wd; b[pi.second] -= wd;
            }
            curr = min(a[0], b[1]) + min(a[1], b[2]) + min(a[2], b[0]); ans = min(ans, curr);
        }while(next_permutation(moves.begin(), moves.end()));
        return ans;
    };

    int mnWin = calcMN(alice, bob);
    int mxWin = khela(alice, bob); cout << mnWin << " " << mxWin << '\n';
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