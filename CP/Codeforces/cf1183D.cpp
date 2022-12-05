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
    ll ans = 0;
    int a, n;
    cin>> n;
    vector<int>freq(n + 1), taken(n + 1), vc, fin;

    for(int i = 0; i < n; i += 1){
        cin>> a;
        if(!freq[a])    vc.push_back(a);
        freq[a] += 1;
    }

    for(int X: vc)  fin.push_back(freq[X]);
    sort(fin.begin(), fin.end());

    for(int i = fin.size() - 1; i >= 0; i -= 1){
        int now;
        if(taken[fin[i]]){
            int left = 0, right = fin[i], mid, now = 0;

            while(left <= right){
                mid = (left + right)>>1;
                if(!taken[mid]) now = mid, left = mid + 1;
                else right = mid - 1;
            }

            if(!taken[now]) ans += (ll)now;
            taken[now] = 1;
        }
        else ans += (ll)fin[i], taken[fin[i]] = 1;
    }

    cout<<ans <<endl;
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