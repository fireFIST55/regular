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
    vector<ll> remaining(n), cost(n);
    priority_queue<pair<ll, int>>pq;

    for(ll &X: remaining)  cin>> X;
    for(int i = 0; i < n; i += 1){
        cin>> cost[i];
        pq.push({-cost[i], -i});
    }

    ll tot, cst;
    int item;
    for(int i = 0; i < m; i += 1){
        cin>> item>> tot;
        ll x = min(tot, remaining[item - 1]);

        cst = (x*cost[item - 1]);
        remaining[item - 1] -= x;
        tot -= x;

        if(tot){
            while(!pq.empty() && tot){
                while(!pq.empty() && !remaining[-pq.top().second])  pq.pop();
                if(pq.empty())  break;

                ll currCost = -pq.top().first;
                int  currI = -pq.top().second;
                x = min(tot, remaining[currI]);
                cst += x*currCost;

                remaining[currI] -= x;
                tot -= x;
            }
            if(tot)    cout<< 0;
            else cout<< cst;
        }
        else cout<< cst;
        cout<< endl;
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