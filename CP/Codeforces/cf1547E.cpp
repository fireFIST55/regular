#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(k);
    vector<ll>t(k),f(n,INT_MAX);
    
    for(int &X: a)  cin>>X;
    for(int i=0;i<k;i++){
        cin>>t[i];
        f[a[i]-1]=t[i];
    }

    ll curr=INT_MAX;
    for(int i=0;i<n;i++)
        curr=f[i]=min(f[i],curr+1);
    
    curr=INT_MAX;
    for(int i=n-1;i>=0;i--)
        curr=f[i]=min(f[i],curr+1);
    for(ll &X:f)    cout<<X<<' ';
    cout<<endl;
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