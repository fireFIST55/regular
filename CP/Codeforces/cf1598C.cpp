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
    int a, n;
    ull ans = 0;
    double avg, sum = 0;
    cin>> n;
    vector<int>vc(n);
    map<int, int>mp;
    for(int &X: vc){
        cin>> X;
        sum += X;
        mp[X] += 1;
    }

    avg = (sum/1.0)/(n/1.0);
    if(ceil(avg*2)==floor(avg*2)){
        int tar = avg*2;
        for(int i = 0; i<n; i += 1){
            mp[vc[i]] -= 1;
            if(tar >= vc[i])    ans += (ull)mp[tar - vc[i]];
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