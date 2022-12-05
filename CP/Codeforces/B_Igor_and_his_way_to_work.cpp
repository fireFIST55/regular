#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    vector<int>x{0, 1, - 1, 0}, y{1, 0, 0, - 1};
    int n, m, X = 0, Y = 0; cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i += 1){
        cin >> s[i];
        for(int j = 0; j < m; j += 1){
            if(s[i][j] == 'S'){
                X = i, Y = j;
                break;
            }
        }
    }

    bool found = 0;
    function<bool(int xx, int yy, int xpos, int xneg, int ypos, int yneg, int start, int turn)> fun = [&](int xx, int yy, int xpos, int xneg, int ypos, int yneg, int start, int turn){
        bool curr = 0;
        if(s[xx][yy] == 'T')    curr = 1;
        for(int i = 0; i < 4 && !curr; i += 1){
            if(x[i] + xx >= n || y[i] + yy >= m || x[i] + xx < 0 || y[i] + yy < 0 || s[x[i] + xx][y[i] + yy] == '*') continue;
            if(x[i]){
                if((x[i] == - 1 && xneg) || (x[i] == 1 && xpos)){
                    curr = curr | fun(xx + x[i], yy + y[i], xpos, xneg, ypos, yneg, 0, turn);
                }
                else{
                    if(turn < 2){
                        if(x[i] == - 1) xneg = 1, xpos = 0, ypos = 0, yneg = 0;
                        else xpos = 1, xneg = 0, ypos = 0, yneg = 0;
                        curr = curr | fun(xx + x[i], yy + y[i], xpos, xneg, ypos, yneg, 0, start?turn: turn + 1);
                    }
                }
            }
            else{
                if((y[i] == - 1 && yneg) || (y[i] == 1 && ypos)){
                    curr = curr | fun(xx + x[i], yy + y[i], xpos, xneg, ypos, yneg, 0, turn);
                }
                else{
                    if(turn < 2){
                        if(y[i] == - 1) yneg = 1, xpos = 0, xneg = 0, ypos = 0;
                        else ypos = 1, yneg = 0, xpos = 0, xneg = 0;
                        curr = curr | fun(xx + x[i], yy + y[i], xpos, xneg, ypos, yneg, 0, start?turn: turn + 1);
                    }
                }
            }
        }
        return curr;
    };

    found = fun(X, Y, 0, 0, 0, 0, 1, 0);
    found?cout << "YES\n": cout << "NO\n";
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