#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, rec;
    cin>>n>>k;
    
    for(int i = 0; i<n; i++){
        if(!i)  cout<<i<<endl;
        else cout<<(i^(i-1))<<endl;

        cin>>rec;
        if(rec) break;
    }
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