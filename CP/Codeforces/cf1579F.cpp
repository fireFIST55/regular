#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

void solve(){
    int n, d, mx = 0;
    cin>> n>> d;
    vector<int>vc(n), ar(n), frq(n);

    for(int i = 0; i<n; i += 1){
        cin>> vc[i];
        ar[i] = (i + n - d)%n;
    }

    for(int i = 0; i<n; i += 1){
        if(!frq[i]){
            bool off = 0;
            int j = i, len = 0, one = 0, x = 0;

            while(!frq[j]){
                frq[j] = 1;

                if(vc[j])   one += 1;
                else{
                    mx = max(one, mx);
                    if(!off) x = one;
                    off = 1;
                    one = 0;
                }

                j = ar[j];
                len += 1;
            }

            if(one == len){
                cout<<-1<<endl;
                return;
            }
            
            mx = max(mx, x + one);
        }
    }

    cout<<mx<<endl;
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