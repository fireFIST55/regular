#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n,mx=0,mn=INT_MAX,ans=0,tot=0;;
    cin>>n;
    vector<int>vc(n);

    for(int &X:vc){
        cin>>X;
        if(X==-1)   tot+=1;
    }
    if(tot==n)    cout<<0<<' '<<0<<endl;
    else{
        for(int i=0;i<n;i++){
            if(i&&vc[i]==-1&&vc[i-1]!=-1)   mn=min(mn,vc[i-1]),mx=max(mx,vc[i-1]);
            if(i<n-1&&vc[i]==-1&&vc[i+1]!=-1)   mn=min(mn,vc[i+1]),mx=max(mx,vc[i+1]);
        }

        int a=(mx+mn)/2;
        for(int i=0;i<n;i++){
            if(vc[i]==-1)   vc[i]=a;
            if(i)   ans=max(ans,abs(vc[i]-vc[i-1]));
        }
        cout<<ans<<' '<<a<<endl;
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