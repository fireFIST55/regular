#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    int incr=-1,decr=n;
    vector<int>vc(n);
    for(int &X:vc) cin>>X;

    for(int i=0;i<n;i++){
        if(vc[i]<i) break;
        incr=i;
    }

    for(int i=n-1;i>=0;i--){
        if(vc[i]<(n-1)-i)   break;
        decr=i;
    }
    
    decr<=incr?cout<<"Yes\n":cout<<"No\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}