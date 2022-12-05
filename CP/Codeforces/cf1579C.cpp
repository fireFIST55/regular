#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int n, m, k;
    cin>> n>> m>> k;
    vector<vector<int>>diagL(n, vector<int>(m, 0)), diagR(n, vector<int>(m, 0)), check(n, vector<int>(m, 0));
    char s[n][m + 5];
    for(int i = 0; i<n; i += 1) cin>> s[i];

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            diagR[i][j] = diagL[i][j] = (s[i][j] == '*');
            if(i && j && s[i][j] == '*'){
                diagL[i][j] += diagL[i - 1][j - 1];
                if(j + 1 < m)   diagR[i][j] += diagR[i - 1][j + 1];  
            }
        }
    }

    int mn, l, r, ln;
    for(int i = n - 1; i >= 0; i -= 1){
        for(int j = 0; j < m; j += 1){
            if(s[i][j] == '*'){
                mn = min(diagL[i][j] - 1, diagR[i][j] - 1);
                if(mn < k && !check[i][j]){
                    // cout<<i<<" "<<j<<" min:\t"<<mn<<endl;
                    cout<<"NO\n";
                    return;
                }

                if(mn >= k){
                    check[i][j] = 1;
                    ln = mn, l = i - 1, r = j - 1;
                    while(ln--) check[l--][r--] = 1;

                    ln = mn, l = i - 1, r = j + 1;
                    while(ln--) check[l--][r++] = 1;
                }
            }
        }
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            if(!check[i][j] && s[i][j] == '*'){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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