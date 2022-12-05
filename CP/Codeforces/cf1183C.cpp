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
    ll k, n, a, b;
    cin>> k>> n>> a>> b;
    ll turns = k/a;

    if(turns > n || (turns == n && k%a))   cout <<n <<endl;
    else if(turns == n) cout<< n - 1 << endl;
    else{
        ll left = 0, right = n, mid, ans;
        while(left <= right){
            mid = (left + right)>>1;
            if(mid*a + (n - mid)*b < k)  ans = mid, left = mid + 1;
            else right = mid - 1;
        }

        if(ans*a + (n - ans)*b < k)    cout<< ans<< endl;
        else cout<<-1 <<endl;    
    }
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