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
    vector<int>a(n + 1), pos(n + 1);

    for(int i = 1; i <= n; i += 1){
        cin>> a[i];
        pos[a[i]] = i;
    }

    int range = 1, p;
    for(int i = 1; i <=n; i += 1){
        if(pos[i] > range){
            
            for(int k = pos[i]; k >= range + 1; k -= 1) a[k] = a[k - 1], pos[a[k]] = k;
            a[range] = i;
            int temp = pos[i];
            pos[i] = range;
            range = temp;
        }
        else if(pos[i] == range)    range += 1;
    }

    for(int i = 1; i <=n; i += 1)   cout<<a[i]<<' ';
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