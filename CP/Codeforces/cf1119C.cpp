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
    bool no = 0;
    int n, m;
    cin>> n>> m;
    vector<vector<int>>a(n, vector<int>(m)), b(n, vector<int>(m));
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1)   cin>> a[i][j];
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1)   cin>> b[i][j];
    }

    for(int i = 0; i < n && !no; i += 1){
        for(int j = 0; j < m && !no; j += 1){

            if(a[i][j] != b[i][j]){
                if(i + 1 == n){
                    no = 1;
                    continue;

                }
                a[i][j] = !a[i][j];
                a[i + 1][j] = !a[i + 1][j];

                while(j < m && a[i][j] == b[i][j])  j += 1;
                if(j < m) a[i][j] = b[i][j], a[i + 1][j] = !a[i + 1][j];
                else no = 1;
            }
        }
    }

    no?cout<<"No\n": cout<<"Yes\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while(t--)
        solve();
    
    return 0;
}