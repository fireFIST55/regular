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
    int a, n, even = 0, odd = 0, ans1 = 0, ans2 = 0;
    cin>> n;
    vector<int>nw(n);
    for(int i = 0; i < n; i += 1){
        cin>> a;
        nw[i] = a&1;
        a&1?odd += 1: even += 1;
    }

    if(abs(even - odd) > 1){
        cout<<-1<<endl;
        return;
    }

    if(n&1){
        if(even > odd){
            for(int i = 0, k = 1; i < n; i += 1){
                if(nw[i]){
                    ans1 += abs(i - k);
                    k += 2;
                }
            }
        }
        else{
            for(int i = 0, k = 0; i < n; i += 1){
                if(nw[i]){
                    ans1 += abs(i - k);
                    k += 2;
                }
            }
        }
        cout<<ans1<<endl;
    }
    else{
        for(int i = 0, k = 0; i < n; i += 1){
            if(nw[i]){
                ans1 += abs(i - k);
                k += 2;
            }
        }
        for(int i = 0, k = 1; i < n; i += 1){
            if(nw[i]){
                ans2 += abs(i - k);
                k += 2;
            }
        }
        cout<<min(ans1, ans2)<<endl;
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}