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
    bool upor = 0, nich = 0;
    string s;
    cin>> s;
    for(int i = 0; s[i]; i += 1){
        if(s[i] == '0'){
            if(nich){
                cout<< 1<<" " << 4<<endl;
                nich = 0;
            }
            else{
                cout<< 3<<" " << 4<<endl;
                nich = 1;
            }
        }
        else{
            if(upor){
                cout<< 1<<" " << 3<<endl;
                upor = 0;
            }
            else{
                cout<< 1<<" "<< 1<<endl;
                upor = 1;
            }
        }
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