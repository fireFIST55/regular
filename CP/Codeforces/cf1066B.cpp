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
    int a, n, r, ans = 0, mn = - 1;
    cin>> n>> r;
    vector<pair<int, int>> rng;

    for(int i = 1; i <= n; i += 1){
        cin>> a;
        if(a) rng.push_back({max(1, i - r + 1), min(i + r - 1, n)});
    }
    sort(rng.begin(), rng.end());
    if(!rng.size()){
        cout<< - 1<< endl;
        return;
    }

    int strt = 0;
    for(int i = 0; i < rng.size(); i += 1){
        int k = i, x = strt;

        while(k < rng.size() && rng[k].first <= x + 1) strt = rng[k].second, k += 1;
        // cout<< strt<< endl;
        if(k == i){
            cout<< - 1<<endl;
            return;
        }
        else if(strt == n){
            ans += 1;
            break;
        }
        else ans += 1, i = k - 1;
    }
    strt == n?cout<< ans: cout<< -1;
    cout<< endl;
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