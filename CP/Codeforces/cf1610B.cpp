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
    int n;
    cin>> n;
    vector<int>vc(n);
    for(int &X: vc) cin>> X;
    bool yes = 1;

    for(int i = 0, j = n - 1; i < j; i += 1, j -= 1){
        if(vc[i] != vc[j]){

            for(int l = i, r = j - 1; l < r;){
                if(vc[l] != vc[r]){
                    if(vc[l] == vc[j]) l += 1;
                    else if(vc[r] == vc[j]) r -= 1;
                    else{
                        yes = 0;
                        break;
                    }
                }
                else l += 1, r -= 1;
            }

            if(yes){
                cout<<"YES\n";
                return;
            }

            yes = 1;
            for(int l = i + 1, r = j; l < r;){
                if(vc[l] != vc[r]){
                    if(vc[l] == vc[i]) l += 1;
                    else if(vc[r] == vc[i]) r -= 1;
                    else{
                        yes = 0;
                        break;
                    }
                }
                else l += 1, r -= 1;
            }
            break;
        }
    }

    yes?cout<<"YES\n": cout<<"NO\n";
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