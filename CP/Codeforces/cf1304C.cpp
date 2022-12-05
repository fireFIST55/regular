#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n,m,t,h,l,mx,mn,prev=0;
    bool yes=1;
    cin>>n>>m;
    mx=mn=m;
    for(int i=0;i<n;i++){
        cin>>t>>l>>h;
        if(yes){
            mn-=(t-prev);
            mx+=(t-prev);
            if(l>mx||h<mn)
                yes=0;
            mn=max(l,mn);
            mx=min(h,mx);
            prev=t;
        }
    }
    yes?cout<<"YES\n":cout<<"NO\n";
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