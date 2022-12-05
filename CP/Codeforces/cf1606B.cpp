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
    ull com, cable, done = 1, hours = 0;
    cin>> com>> cable;
    while(done < com){
        if(done <= cable)    hours += 1, done *= (ull)2;
        else{
            hours += (com - done)/cable + ((com - done)%cable?(ull)1: (ull)0);
            break;
        }
    }

    cout<<hours<<endl;
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