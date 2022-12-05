#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

vector<vector<int>>pre(401, vector<int>(401, 0));

int calc0(int x1, int y1, int x2, int y2){
    return pre[x2 - 1][y2 - 1] - pre[x1][y2 - 1] - pre[x2 - 1][y1] + pre[x1][y1]; 
}

int calc1(int x1, int y1, int x2, int y2){
    return (x2 - x1 + 1)*(y2 - y1 + 1) - calc1(x1 + 1, y1 + 1, x2 + 1, y2 + 1);
}

void solve(){
    int n, m, ans = INT_MAX;
    cin>> n>> m;
    vector<vector<int>>zero(n + 1, vector<int>(m + 1));

    for(int i = 1; i<=n; i += 1){
        string s;
        cin>>s;

        for(int j = 1; j<=m; j += 1){
            zero[i][j] = (s[j - 1] == '0');
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + (s[j - 1] == '1');
        }
    }

    for(int l = 1; l<=n; l += 1){
        for(int r = l + 3; r<=m; r += 1){
            int curr_min = INT_MAX, prev_min = INT_MAX;

            for(int i = 5; i<=n; i += 1){
                int last_row_cost = calc1(i, l + 1, i, r - 1);
                int cost = calc0(i - 4, l, i , r) + calc1(i - 4, l + 1, i - 4, r - 1) + last_row_cost + calc1(i - 3, l, i - 1, l) + calc1(i - 3, r, i - 1, l);
                prev_min += last_row_cost + zero[i - 1][l] + zero[i - 1][r];
                prev_min -= calc1(i - 1, l - 1, i - 1, r - 1);
                curr_min = min(prev_min, cost);
                ans = min(curr_min, ans);
                prev_min = curr_min;
            }
        }
    }
    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}