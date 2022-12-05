#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,x,mx=0,ans=0;
    cin>>n>>x;
    map<int,int>fr;
    vector<int>dis(n);
    for(int &X:dis){
        cin>>X;
        mx=max(mx,X);
        fr[X]+=1;
    }

    if(fr[x]) ans=1;
    else{
        ans=x/mx;
        int rem=x%mx;
        if(rem){
            if(ans) ans-=1;
            ans+=2;
        }
    }
    cout<<ans<<endl;
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