#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int>dx{1, - 1, 0, 0}, dy{0, 0, 1, - 1};

struct node{
    ll l = INT_MAX, r = INT_MAX, d = INT_MAX, u = INT_MAX; 
};

void solve(){
    int r, c, k; cin >> r >> c >> k;
    vector<vector<node>>khela(r, vector<node>(c));
    for(int i = 0; i < r; i += 1){
        for(int j = 0; j < c - 1; j += 1){
            int d; cin >> d;
            khela[i][j].r = khela[i][j + 1].l = d;
        }
    }
    for(int i = 0; i < r - 1; i += 1){
        for(int j = 0; j < c; j += 1){
            int d; cin >> d;
            khela[i][j].d = khela[i + 1][j].u = d;
        }
    }

    vector<vector<vector<ll>>>dp(r, vector<vector<ll>>(c, vector<ll>(10, INT_MAX)));
    function<ll(int I, int J, int left)>calc = [&](int I, int J, int left){
        ll des;
        if(!left) des = 0;
        else if(I < 0 || J < 0 || I >= r || J >= c) des = INT_MAX;
        else if(dp[I][J][left] != INT_MAX) des = dp[I][J][left];
        else{
            for(int i = 0; i < 4; i += 1){
                if(!i) des = min(dp[I][J][k], khela[I][J].d + calc(I + dx[i], J + dy[i], left - 1));
                else if(i == 1) des = min(dp[I][J][k], khela[I][J].u + calc(I + dx[i], J + dy[i], left - 1));
                else if(i == 2) des = min(dp[I][J][k], khela[I][J].r + calc(I + dx[i], J + dy[i], left - 1));
                else des = min(dp[I][J][k], khela[I][J].l + calc(I + dx[i], J + dy[i], left - 1));
            }
        }

        dp[I][J][k] = des;
        return des;
    };
    if(k & 1){
        for(int i = 0; i < r; i += 1){
            for(int j = 0; j < c; j += 1) cout << - 1 << ' ';
            cout << '\n';
        }
    }
    
    k /= 2;
    for(int i = 0; i < r; i += 1){
        for(int j = 0; j < c; j += 1) dp[i][j][k] = calc(i, j, k);
    }
    for(int i = 0; i < r; i += 1){
        for(int j = 0; j < c; j += 1) cout << 2 * dp[i][j][k] << " ";
        cout << '\n';
    }
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