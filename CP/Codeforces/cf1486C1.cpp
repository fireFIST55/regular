#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

int query(int l, int r){
    if(l >= r) return -1;

    int pos;
    cout<<"? "<< l + 1<<" " <<r + 1<<endl;
    cin>> pos;

    return pos - 1;
}

void solve(){
    int n;
    cin>> n;
    int left = 0, right = n, mid;
    while(right - left > 1){
        mid = (left + right)>>1;
        int pos = query(left, right - 1);

        if(pos < mid){
            if(query(left, mid - 1) == pos) right = mid;
            else left = mid;
        }
        else{
            if(query(mid, right - 1) == pos) left = mid;
            else right = mid;
        }
    }

    cout<<"! "<< right << endl;
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