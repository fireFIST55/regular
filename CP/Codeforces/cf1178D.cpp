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

bool prime(int n){
    for(int i = 2; i*i <= n; i += 2){
        if(!(n%i))  return false;
        if(i == 2)  i -= 1;
    }

    return true;
}

void solve(){
    int n, edges;
    cin>> n;
    edges = n;

    while(!prime(edges)) edges += 1;

    cout<<edges<<endl;
    cout<<1<<" "<<n <<endl;
    for(int i = 1; i < n; i += 1)  cout<<i <<" "<< i + 1<<endl;

    for(int i = 0; i < edges - n; i += 1)   cout<<i + 1<<" " << i + n/2 + 1 <<endl;
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