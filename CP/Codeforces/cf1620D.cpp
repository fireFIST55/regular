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
    int n, c3 = 0, c31 = 0, c32 = 0, c321 = 0, c322 = 0;
    cin>> n;
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
    }

    for(int i = 0; i < n; i += 1){
        if(vc[i] % 3){
            c3 = INT_MAX;
            break;
        }
        else c3 = max(c3, vc[i]/3);
    }

    for(int i = 0; i < n; i += 1){
        if(vc[i]%3 == 2){
            c31 = INT_MAX - 1;
            break;
        }
        else    c31 = max(c31, vc[i]/3);
    }
    c31 += 1;

    for(int i = 0; i < n; i += 1){
        if(vc[i]%3 == 1){
            c32 = INT_MAX - 1;
            break;
        }
        else c32 = max(c32, vc[i]/3);
    }
    c32 += 1;

    for(int i = 0; i < n; i += 1){
        if(vc[i]%3) c321 = max(c321, vc[i]/3);
        else c321 = max(c321, vc[i]/3 - 1);
    }
    c321 += 2;

    for(int i = 0; i < n; i += 1){
        if(vc[i] == 1){
            c322 = INT_MAX - 2;
            break;
        }
        else if(vc[i]%3 == 1) c322 = max(c322, vc[i]/3 - 1);
        else c322 = max(c322, vc[i]/3);
    }
    c322 += 2;

    cout<< min(c3, min(c31, min(c32, min(c321, c322)))) <<endl;
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