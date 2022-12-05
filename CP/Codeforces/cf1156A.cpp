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
    bool infinite = 0;
    int n, ans = 0;
    cin>> n;
    vector<int> a(n);
    map<pair<int, int>, int>points;
    points[{1, 2}] = 3;
    points[{1, 3}] = 4;

    for(int i = 0; i < n; i += 1){
        cin>> a[i];

        if(!infinite){
            if(i){
                int x = min(a[i], a[i -1]), y = max(a[i], a[i - 1]);
                if(x == 2 && y == 3)    infinite = 1;
                else    ans += points[{x, y}];
                if(i >= 2 && a[i] == 2 && a[i - 1] == 1 && a[i - 2] == 3)   ans -= 1;
            }
        }
    }

    infinite?cout<<"Infinite\n": cout<<"Finite\n" <<ans <<endl;
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