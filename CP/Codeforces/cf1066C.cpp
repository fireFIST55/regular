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
    int q, id;
    cin>> q;
    map<int, int>lf, r;
    vector<int>left, right;

    for(int i = 0; i < q; i += 1){
        char ch;
        cin>> ch>> id;

        if(ch == 'L'){
            left.push_back(id);
            lf[id] = (int)left.size();
        }
        else if(ch == 'R'){
            right.push_back(id);
            r[id] = (int)right.size();
        }
        else{
            int lagbe;
            if(lf[id])
                lagbe = min((int)left.size() - lf[id], lf[id] + (int)right.size() - 1);
            else lagbe = min((int)right.size() - r[id], r[id] + (int)left.size() - 1);

            cout<< lagbe<< endl;
        }
    }
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