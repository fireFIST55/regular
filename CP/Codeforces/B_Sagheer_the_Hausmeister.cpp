#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string s[n];
    deque<int>khela[n];
    for(int i = 0; i < n; i += 1){
        cin >> s[i];
        for(int j = 0; j < m + 2; j += 1){
            if(s[i][j] == '1') khela[n - i - 1].push_back(j);
        }
    }

    int ans = INT_MAX; m += 2;
    function<void(int, int prev, int index)>fun = [&](int moves, int prev, int index){
        if(index == n){
            ans = min(ans, moves);
            return;
        }

        for(int i = 0; i < 2; i += 1){
            if(i){
                if(prev){
                    if(!khela[index].empty()){
                        int mv = index + 1 == n? (m - 1 - khela[index].front()): 2*(m - 1 - khela[index].front()) + 1;
                        fun(moves + mv , i, index + 1);
                    }
                    else fun(moves + (index + 1 != n?1: 0), i, index + 1);
                }
                else{
                    int mv = index + 1 != n? m - 1: khela[index].back();
                    fun(moves + mv, i, index + 1);
                }
            }
            else{
                if(prev){
                    int mv = index + 1 != n? m - 1: m - 1 - khela[index].front();
                    fun(moves + mv, i, index + 1);
                }
                else{
                    if(!khela[index].empty()){
                        int mv = index + 1 != n?2*khela[index].back() + 1: khela[index].back();
                        fun(moves + mv, i, index + 1);
                    }
                    else fun(moves + (index + 1 != n?1: 0), i, index + 1);
                }
            }
        }
    };

    fun(0, 0, 0);
    cout << ans << '\n';
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