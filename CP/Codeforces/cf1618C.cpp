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
    int n;
    cin>> n;
    ull g1 = 0, g2 = 0;
    vector<ull>vc(n);
    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        if(i&1) g1 = __gcd(g1, vc[i]);
        else g2 = __gcd(g2, vc[i]);
    }

    bool no = 0;
    for(int i = 0; i < n && !no; i += 2){
        if(!(vc[i] % g1))   no = 1;
    }

    if(!no){
        cout<< g1<< endl;
        return;
    }
    
    no = 0;
    for(int i = 1; i < n && !no; i += 2){
        if(!(vc[i] % g2)) no = 1;
    }

    if(!no && g2 != 1){
        cout<< g2<< endl;
        return;
    }

    cout<< 0<< endl;
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