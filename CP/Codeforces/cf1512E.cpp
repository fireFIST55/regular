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
    int n, l, r, s;
    cin>> n>> l>> r>> s;
    int left = (r - l + 1);
    vector<int>ans(n), used(n + 1);
    l--;
    
    for(int i = 0; i < n && left; i += 1){
        if(s >= (n - i) && s - n + i >= (((left-1)*left)/2)){
            // cout<<"Ekhane dhukse:\t"<< i<< endl;
            s -= (n - i);
            left -= 1;
            used[n - i] = 1;
            ans[l++] = n - i;
        }
    }

    if(left > 0 || s > 0){
        cout<< - 1<< endl;
        return;
    }

    for(int i = 0, k = 1; i < n; i += 1){
        if(!ans[i]){
            while(k < n && used[k]) k += 1;
            ans[i] = k++;
        }
    }

    for(int X: ans) cout<< X<<" ";
    cout<< endl;
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