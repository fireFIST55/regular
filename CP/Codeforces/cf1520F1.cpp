#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long

void solve(){
    int n, t, k, sm;
    cin>> n>> t>> k;
    int left = 1, right = n, mid;

    while(left < right){
        mid = ( left + right )/2;
        cout<<"? "<<left<<" "<<mid<<endl;
        cin>> sm;
        
        if(k<=(mid - left + 1 - sm))
            right = mid;
        else{
            k = k - (mid - left + 1 - sm);
            left = mid + 1;
        }
    }
    cout<<"! "<<left<<endl;
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