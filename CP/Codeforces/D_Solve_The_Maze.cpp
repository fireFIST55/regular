#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string s[n];
    vector<vector<int>>vis(50, vector<int>(50, 0));
    vector<int>dx{1, - 1, 0, 0}, dy{0, 0, 1, - 1};
    for(int i = 0; i < n; i += 1) cin >> s[i];
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            if(s[i][j] == 'B'){
                if((i && s[i - 1][j] == 'G') || (i + 1 < n && s[i + 1][j] == 'G') || (j && s[i][j - 1] == 'G') || (j + 1 < m && s[i][j + 1] == 'G')){
                    cout << "No\n";
                    return;
                }
                
                if(i && s[i - 1][j] != 'B') s[i - 1][j] = '#';
                if(j && s[i][j - 1] != 'B') s[i][j - 1] = '#';
                if(i + 1 < n && s[i + 1][j] != 'B') s[i + 1][j] = '#';
                if(j + 1 < m && s[i][j + 1] != 'B') s[i][j + 1] = '#';
            }
        }
    }

    function<bool(int X, int Y, int title)> khela = [&](int X, int Y, int title){
        deque<pair<int, int>>dq; dq.push_back({X, Y}); vis[X][Y] = title;

        while(!dq.empty()){
            pair<int, int>pi = dq.front(); dq.pop_front();
            for(int i = 0; i < 4; i += 1){
                int x = pi.first + dx[i], y = pi.second + dy[i];
                if(x < 0 || y < 0 || x > n - 1 || y > m - 1 || vis[x][y] == title || s[x][y] == 'B' || s[x][y] == '#') continue;
                if(x == n - 1 && y == m - 1 || vis[x][y]) return 1;

                vis[x][y] = title; dq.push_back({x, y});
            }
        }

        return 0;
    };

    int curr = 1;
    for(int i = n - 1; i >= 0; i -= 1){
        for(int j = 0; j < m; j += 1){
            if(s[i][j] == 'G'){
                if(!khela(i, j, curr++)){
                    cout << "No\n";
                    return;
                }
            }
        }
    }

    cout << "Yes\n";
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