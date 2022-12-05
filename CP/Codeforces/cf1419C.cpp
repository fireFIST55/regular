#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,sum=0,count=0;
    cin>>n>>x;
    vector<int>vec(n);
    for(auto &it:vec){
        cin>>it;
        sum+=it;
        count+=(it==x);
    }
    if(count==n)
        cout<<0<<'\n';
    else if(count>0||sum==n*x)
        cout<<1<<'\n';
    else
        cout<<2<<'\n';
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
}