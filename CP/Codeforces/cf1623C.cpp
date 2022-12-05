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
int n;
vector<int>h;

bool check(int val){
    vector<int>vc = h;
    int res = 0;
    for(int i = n - 1; i >= 0; i -= 1){
        if(vc[i] > val && i > 1){
            res = min(h[i], vc[i] - val)/3;
            vc[i - 1] += res;
            vc[i - 2] += res*2;
        }
        else if(vc[i] < val)    return 0;
    }

    // for(int X: vc)  cout<< X<< " ";
    // cout<< endl;
    return 1;
}

void solve(){
    int mx = INT_MIN;
    cin>> n;
    h.resize(n, 0);
    for(int &X: h){
        cin>> X;
        mx = max(mx, X);
    }

    int left = 1, right = mx, mid, ans = 1;
    while(left <= right){
        mid = (left + right)/2;

        if(check(mid)) left = mid + 1, ans = mid;
        else right = mid - 1;
    }

    cout<< ans<< endl;
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