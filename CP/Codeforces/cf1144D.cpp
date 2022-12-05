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
    int n, ans;
    cin>> n;
    bool on = 1;
    int mx = 0, pos;
    vector<int>vc(n), freq(200005);

    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        freq[vc[i]] += 1;
        if(mx < freq[vc[i]]){
            mx = freq[vc[i]];
            pos = i;
        }
    }

    cout<<n - mx<<endl;
    for(int i = pos - 1; i >= 0; i -= 1){
        if(vc[i] != vc[i + 1]){
            if(vc[i] > vc[i + 1])   cout<< 2 << " ";
            else cout<< 1<< " ";

            cout<< i + 1<< " "<< i + 2 <<endl;
            vc[i] = vc[i + 1];
        }
    }

    for(int i = pos + 1; i < n; i += 1){
        if(vc[i] != vc[i - 1]){
            if(vc[i] > vc[i - 1])   cout<< 2<< " ";
            else cout<< 1<< " ";

            cout<< i + 1<<" " << i <<endl;
            vc[i] = vc[i - 1];
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