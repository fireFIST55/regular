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
    bool sealed = 0;
    int n, ans1 = 0, ans2 = 1, mx = 1, x;
    cin>> n;
    x = n;
    set<int>st;

    for(int i = 2; i*i <= n; i += 2){
        if(!(n%i)){
            int cnt = 0;
            while(!(n%i)){
                n /= i;
                cnt += 1;
            }

            mx = max(cnt, mx);
            st.insert(cnt);
            ans2 *= i;
        }

        if(i == 2) i -= 1;
    }

    if(n > 1){
        st.insert(n);
        mx = max(mx, 1);
        ans2 *= n;
    }
        
    int d = log2(mx);
    cout<<ans2 << " ";
    if(ans2 == x) cout<< 0<< endl;
    else if((1<<d) == mx){
        if(st.size() == 1)  cout<< d<< endl;
        else cout<< d + 1 <<endl;
    }
    else cout<< d + 2<< endl;
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