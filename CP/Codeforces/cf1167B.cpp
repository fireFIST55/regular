#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int mul1, mul2, a1, b1, a2, b2;
    vector<int>v{4, 8, 15, 16, 23, 42}, freq(43), vc(8);
    for(int i = 0; i < 6; i += 1)   freq[v[i]] = 1;

    for(int i = 1; i <= 2; i += 1){
        cout<<"? "<<i*i <<" "<<i*i + 1 <<endl;
        cin>> mul1;

        for(int k = 0; k < 6; k += 1){
            if(!(mul1%v[k])){
                if(freq[mul1/v[k]]){
                    a1 = v[k];
                    b1 = mul1/v[k];
                    break;
                }
            }
        }

        cout<<"? "<<i*i + 1<<" "<<i*i + 2 <<endl;
        cin>> mul2;
        for(int k = 0; k < 6; k += 1){
            if(!(mul2%v[k])){
                if(freq[mul2/v[k]]){
                    a2 = v[k];
                    b2 = mul2/v[k];
                    break;
                }
            }
        }

        if(a2 == a1 || a2 == b1) vc[i*i + 1] = a2;
        else vc[i*i + 1] = b2;
        vc[i*i] = mul1/vc[i*i + 1];
        vc[i*i + 2] = mul2/vc[i*i + 1];
    }

    for(int i = 1; i < 7; i += 1){
        if(i == 1) cout<<"!";
        cout<<" "<<vc[i];
    }
    cout<<endl;
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