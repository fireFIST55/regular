#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long t;
    cin>>t;
   
    vector< vector<long long> > v1(t,vector<long long> (t,0));
    for(long long i=0;i<t;i++){
        for(long long j=0;j<t;j++) {
            cin>>v1[i][j];
        }
    };
    long long ans=sqrt(v1[0][1]*v1[0][2]/v1[1][2]);
    cout<<ans<<" ";
    for(long long i=1;i<t;i++) cout<<v1[i][0]/ans<<" ";
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