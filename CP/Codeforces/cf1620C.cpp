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
    ull x;
    int n, k;
    string s;
    cin>> n>> k>> x>> s;
    vector<int>vc;
    for(int i = 0; i < n; i += 1){
        if(s[i] == '*'){
            int cnt = 0;

            while(i < n && s[i] == '*'){
                cnt += 1;
                i += 1;
            }
            vc.push_back(cnt);
        }
    }

    ull cnt = 0;
    for(int i = vc.size() - 1; i >= 0; i -= 1){
        if(i == vc.size() - 1) cnt += (vc[i]*k);
        else{
            cnt += (ull)(cnt + 1)*k*vc[i];
            if(cnt >= x){
                
            }
        }

        if(cnt == )
    }
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