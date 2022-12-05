#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int n,k,to;
    cin>>n;
    k=7+(n-1)*3;
    cout<<k<<endl;
    cout<<0<<' '<<0<<endl;
    cout<<1<<' '<<0<<endl;
    for(int i=1;i<=n+1;i++){
        int lim=i==n+1?1:2;
        for(int j=i-1;j<i+lim;j++)
            cout<<j<<' '<<i<<endl;
    }  
}
int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();
    return 0;
}