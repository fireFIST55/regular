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
    string s;
    bool ok = true;
    vector<int>vc(n);
    for(int &X: vc) cin>> X;
    cin>> s;
    vector<int>l, r;

    for(int i = 0; i < n; i += 1)   (s[i] == 'B'?l: r).push_back(vc[i]);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end(), greater<int>());

    for(int i = 0; i < l.size() && ok; i += 1){
        if(l[i] < i + 1)   ok = false;
    }

    for(int i = 0; i < r.size() && ok; i += 1){
        if(r[i] > n - i)   ok = false;
    }

    ok?cout<<"YES\n": cout<<"NO\n";   
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