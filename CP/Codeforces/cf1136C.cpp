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
    int a, n, m;
    cin>> n>> m;
    vector<vector<int>>emnei1(n + m, vector<int>()), emnei2(n + m, vector<int>());
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            cin>> a;
            emnei1[i + j].push_back(a);
        }
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            cin>> a;
            emnei2[i + j].push_back(a);
        }
    }

    bool ok = 1;
    for(int i = 0; i < n + m && ok; i += 1){
        sort(emnei1[i].begin(), emnei1[i].end());
        sort(emnei2[i].begin(), emnei2[i].end());

        for(int j = 0; j < emnei1[i].size() && ok; j += 1){
            if(emnei1[i][j] != emnei2[i][j]){
                ok = 0;
                break;
            }
        }
    }

    ok?cout<< "YES\n": cout<< "NO\n";
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