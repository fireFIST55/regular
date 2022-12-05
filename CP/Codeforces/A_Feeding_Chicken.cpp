#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 100;
vector<char>khela[3];
vector<int>dx{1, - 1, 0, 0}, dy{0, 0, 1, - 1};

void solve(){
    int r, c, k; cin >> r >> c >> k;
    string s[r];
    char field[N][N + 5];
    vector<vector<int>>vis(r + 1, vector<int>(c + 1, 0));

    vector<pair<int, int>>rice;
    for(int i = 0; i < r; i += 1){
        cin >> s[i];
        for(int j = 0; j < c; j += 1){
            if(s[i][j] == 'R') rice.emplace_back(i, j);
        }
    }

    function<void(int x, int y, char ass)>move = [&](int x, int y, char ass){
        field[x][y] = ass; vis[x][y] = 1;
        for(int i = 0; i < 4; i += 1){
            int X = x + dx[i], Y = y + dy[i];
            if(!vis[X][Y] && X >= 0 && Y >= 0 && X < r && Y < c) move(X, Y, ass);
        }
    };

    int each = (int)rice.size() / k, extra = (int)rice.size() % k, n = rice.size(), l = 0;
    for(int i = 0; i < 3 && n; i += 1){
        for(int j = 0; khela[i].size() && n; j += 1){
            for(int k = 0; k < each; k += 1){
                int x = rice[l].first, y = rice[l].second; n -= 1;
                field[x][y] = khela[i][j]; l += 1; vis[x][y] = 1;
            }
            if(extra){
                int x = rice[l].first, y = rice[l].second; n -= 1; vis[x][y] = 1;
                field[x][y] = khela[i][j]; extra -= 1; l += 1;
            }
        }
    }

    for(int i = 0; i < rice.size(); i += 1){
        int x = rice[i].first, y = rice[i].second;
        move(x, y, field[x][y]);
    }

    for(int i = 0; i < r; i += 1) field[i][c] = '\0';
    for(int i = 0; i < r; i += 1) cout << field[i] << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    for(int i = 0; i < 3; i += 1){
        for(int j = 0; j < 26; j += 1){
            char ch = (i == 0?'a': i == 1?'A': '0');
            khela[i].emplace_back(ch + j);
            if(i == 2 && j == 9) break;
        }
    }

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}