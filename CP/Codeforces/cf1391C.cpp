#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const ll mod=1e9+7;
int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,fact=1,x=1;
    cin>>n;
    for(ll i=1;i<=n-1;i++){
        fact*=i;
        fact%=mod;
        x*=2;
        x%=mod;
    }
    fact*=n;
    fact%=mod;
    fact-=x;
    fact%=mod;
    if(fact<0)  fact+=mod;
    cout<<fact<<endl;
    return 0;
}