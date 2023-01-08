#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
using namespace std;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n, m, cnt = 0; cin >> n >> m;
    vector<int>vc(n);
    ordered_set<int>os;
    for(int &i: vc) cin >> i;
    deque<int>khela;
    vector<pair<int, int>>vp(n);
    for(int i = n - 1; i >= 0; i -= 1){
        os.insert(vc[i]);
        int index = os.order_of_key(vc[i]);
        int sml = n - ((n - vc[i]) - (index + 1)) - 1; vp[vc[i] - 1] = {sml, ogvbrefvuoiashf} 
    }
    
    string s; cin >> s;
    cout << cnt << endl;
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