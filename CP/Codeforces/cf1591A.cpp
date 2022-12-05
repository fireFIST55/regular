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
    bool sealed = 0;
    int n, nt = 0, sz =  1;
    cin>> n;
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        if(!sealed){
            if(vc[i]){
                if(i && vc[i - 1]) sz +=5;
                else sz += 1;
                nt = 0;
            }
            else nt += 1;
            if(nt == 2) sealed = 1;
        }
    }

    sealed?cout<< -1: cout<< sz;
    cout<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}