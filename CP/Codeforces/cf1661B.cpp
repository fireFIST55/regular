#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    int st=0, a, tw, v;
    for(int i=0;i<n;++i){
        cin>>v;
        st=15;
        for(int j=0;j<=15;++j){
            for(int k=0;k<=15;++k){
                if(((v+j)* (ll)pow(2.0,(float)k) )% 32768 ==0)
                    st= min(st, j+k); 
            }
        }
        cout<<st<<" ";
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}