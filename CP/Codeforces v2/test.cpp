#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
using namespace std;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ordered_set<int>os;
    int n; cin >> n;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; os.insert(a);
    }
    for(int i: os) cout << i << ' '; cout << os.order_of_key(1) << endl;
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}