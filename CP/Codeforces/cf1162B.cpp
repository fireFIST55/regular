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
    int n, m;
    cin>> n>> m;
    bool no = 0;
    vector<vector<int>>vc1(n, vector<int>(m, 0)), vc2(n, vector<int>(m, 0));

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1)   cin>> vc1[i][j];
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            cin>> vc2[i][j];
            if(vc1[i][j] > vc2[i][j])  swap(vc1[i][j], vc2[i][j]);
        }
    }

    for(int i = 0; i < n && !no; i += 1){
        for(int j = 0; j < m && !no; j += 1){
            if(i > 0 && (vc1[i][j] <= vc1[i - 1][j] || vc2[i][j] <= vc2[i - 1][j])) no = 1;
            if(i + 1 < n && (vc1[i][j] >= vc1[i + 1][j] || vc2[i][j] >= vc2[i + 1][j])) no = 1;
            if(j > 0 && (vc1[i][j] <= vc1[i][j - 1] || vc2[i][j] <= vc2[i][j - 1])) no = 1;
            if(j + 1 < m && (vc1[i][j] >= vc1[i][j + 1] || vc2[i][j] >= vc2[i][j + 1]))  no = 1;
        }
    }

    no?cout<<"Impossible\n": cout<<"Possible\n";
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