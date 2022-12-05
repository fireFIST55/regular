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
    int n;
    cin>> n;
    vector<int>vc(n);

    for(int &X: vc) cin>> X;

    deque<int>dq;
    for(int i = 0; i < n; i += 1){
        if(!i)  cout<< '1'<< endl;
        else{
            if(vc[i] == vc[i - 1] + 1){
                deque<int>sub = dq;

                while(!sub.empty()){
                    cout<< sub.front()<< '.';
                    sub.pop_front();
                }
                cout<< vc[i]<< endl;
            }
            else{
                if(vc[i] == 1){
                    dq.push_back(vc[i - 1]);
                    deque<int>sub = dq;

                    while(!sub.empty()){
                        cout<< sub.front()<< '.';
                        sub.pop_front();
                    }
                    cout<< vc[i]<< endl;
                }
                else{
                    while(!dq.empty()){
                        int x = dq.back();
                        dq.pop_back();
                        if(x + 1 == vc[i]) break;
                    }

                    deque<int>sub = dq;
                    while(!sub.empty()){
                        cout<< sub.front()<< '.';
                        sub.pop_front();
                    }
                    cout<< vc[i]<< endl;
                }
            } 
        }
    }
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