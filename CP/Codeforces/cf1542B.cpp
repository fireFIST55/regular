#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    ll n,a,b,curr=1;
    cin>>n>>a>>b;
    bool yes=0;
    
    while(curr<=n){
        if(!((n-curr)%b)){
            yes=1;
            break;
        }
        if(a==1)    break;
        curr*=a;
    }

    yes?cout<<"Yes\n":cout<<"No\n";
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