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
    int n, a, b;
    cin>> n>> a>> b;
    vector<int>checked(n + 1, 0);

    if(n == 2)  cout<<a <<" " << b;
    else if((a < b && b - 1 >= n/2 && ((n - a + 1) - (b - a) + min((b - 1 - n/2), (b - a - 1))) == n/2) || (b < a && b == n/2 && (n - a + 1) == n/2)){
        checked[a] = checked[b] = 1;
        cout<<a <<" ";
        for(int i = 0, k = n; i < n/2 - 1; i += 1){
            if(!checked[k]){
                cout<<k-- <<" ";
                checked[k + 1] = 1;
            }
            else i -= 1, k -= 1;
        }

        checked[b] = 0;
        for(int i = 0, k = 1; i < n/2; i += 1){
            if(!checked[k])
                cout<<k++ <<" ";
            else i -= 1, k += 1;
        }
    }
    else cout<<-1;
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