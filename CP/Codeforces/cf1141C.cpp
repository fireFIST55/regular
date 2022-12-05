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
    vector<int>vc(n - 1), ans(n);
    for(int i = 0; i < n - 1; i += 1)   cin>> vc[i];

    for(int i = 0; i < n; i += 1){
        vector<int>freq(n + 1);
        ans[i] = 1;
        freq[1] = 1;
        bool no = 0;

        for(int j = i + 1; j < n && !no; j += 1){
            if(ans[j - 1] + vc[j - 1] > 0 && ans[j -1] + vc[j - 1] <= n && !freq[ans[j - 1] + vc[j - 1]]){
                ans[j] = ans[j - 1] + vc[j - 1];
                freq[ans[j]] = 1;
            }
            else no = 1;
        }

        if(!no){
            for(int j = i - 1; j >= 0 && !no; j -= 1){
                if(ans[j + 1] - vc[j] > 0 && ans[j + 1] - vc[j] <= n && !freq[ans[j + 1] - vc[j]]){
                    ans[j] = ans[j + 1] - vc[j];
                    freq[ans[j]] = 1;
                }
                else no = 1;
            }
        }

        if(!no){
            for(int X: ans) cout<< X<< " ";
            cout<< endl;
            return;
        }
    }

    cout<< - 1<< endl;
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