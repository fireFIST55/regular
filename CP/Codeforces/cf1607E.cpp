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
    string s;
    int n, m, x = 0, y = 0, xmPx = 0, xmNx = 0, ymNx = 0, ymPx = 0;
    cin>> n>> m>> s;

    for(int i = 0; s[i]; i += 1){
        y += s[i] == 'L'? - 1: s[i] == 'R'?1: 0;
        x += s[i] == 'D'?+ 1: s[i]  == 'U'?-1: 0;

        if(x > 0) xmPx = max(xmPx, x);
        else if(x < 0) xmNx = min(xmNx, x);

        if(y < 0) ymNx = min(ymNx, y);
        else if(y > 0) ymPx = max(ymPx, y);

        if(xmPx + -xmNx + 1> n){
            if(s[i] == 'U') xmNx += 1;
            else xmPx -= 1;
            // cout<<"EKhane ki dhukso baba\n";

            break;
        }
        
        if(ymPx + -ymNx  + 1> m){
            if(s[i] == 'L') ymNx += 1;
            else ymPx -= 1;
            // cout<<"Ekhane ki dhukso baba?\n";

            break; 
        }
    }

    // cout<< xmPx<< " "<< xmNx<< endl;
    // cout<< ymPx<< " "<< ymNx<< endl;
    cout<< abs(xmNx) + 1<< " "<< abs(ymNx) + 1<< endl;
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