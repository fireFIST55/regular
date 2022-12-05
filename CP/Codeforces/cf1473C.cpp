#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,tot,m;
    cin>>n>>k;
    m=k-(n-k);
    for(int i=1,j=k;i<=k;i++){
        if(i>=m){
            cout<<j<<" ";
            j-=1;
        }
        else
            cout<<i<<" ";
    }
    cout<<"\n";
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}