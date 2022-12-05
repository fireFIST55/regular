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
    int n, m;
    cin>> n>> m;
    vector<char>vch(n);
    vector<int>vc(n), ans(n, -1);
    for(int &X: vc) cin>> X;
    for(char &X: vch)   cin>> X;

    for(int i = 0; i < n; i += 1){
        for(int j = i + 1; j < n; j += 1){
            if(vch[i] != vch[j] && !((abs(vc[i] - vc[j])&1))){
                if(vch[i] == 'R' && vc[i] < vc[j] || vch[i] == 'L' && vc[j] < vc[i]){
                    ans[i] = ans[i] != -1?min(ans[i], (abs(vc[i] - vc[j])/2)): (abs(vc[i] - vc[j])/2);
                    ans[j] = ans[j] != -1?min(ans[i], ans[j]): ans[i];
                }
                else{
                    int time;
                    if(vch[i] == 'L'){
                        time = min(vc[i], m - vc[j]);
                        if(!(abs((vc[i] - 1)%time - (vc[j] + 2*time - 1)%time)&1)){
                            ans[i] = ans[i] != -1?min(ans[i], time + (abs((vc[i] - 1)%time - (vc[j] + 2*time - 1)%time)/2)): time + (abs((vc[i] - 1)%time - (vc[j] + 2*time - 1)%time)/2);
                            ans[j] = ans[j] != -1?min(ans[i], ans[j]): ans[i];
                        }
                    }
                    else{
                        time = min(vc[j], m - vc[i]);
                        if(!(abs((vc[j] - 1)%time - (vc[i] + 2*time - 1)%time)&1)){
                            ans[i] = ans[i] != -1?min(ans[i], time + (abs((vc[j] - 1)%time - (vc[i] + 2*time - 1)%time)/2)): time + (abs((vc[j] - 1)%time - (vc[i] + 2*time - 1)%time)/2);
                            ans[j] = ans[j] != -1?min(ans[i], ans[j]): ans[i];
                        }
                    }
                }
            }

            if(vch[i] == vch[j] && !((abs(vc[i] - vc[j])&1))){
                ans[i] = ans[i] != -1?min(ans[i], ((vch[j] == 'R')?(m - max(vc[i], vc[j])): (min(vc[i], vc[j]))) + (abs(vc[i] - vc[j])/2)): ((vch[j] == 'R')?(m - max(vc[i], vc[j])): (min(vc[i], vc[j]))) + (abs(vc[i] - vc[j])/2);
                ans[j] = ans[j] != -1?min(ans[i], ans[j]): ans[i];
            }
        }
    }

    for(int X: ans) cout<<X<<' ';
    cout<<endl;
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