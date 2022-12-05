#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<int>getdiv(int k){
    vector<int>div;
    for(int i=1;i*i<=k;i++){
        if(!(k%i)){
            div.push_back(i);
            if(i!=k/i)  div.push_back(k/i);
        }
    }
    
    return div;
}

void solve(){
    ll ans=0;
    int n,m,k,a,prev=0;
    cin>>n>>m>>k;
    vector<int>c,d;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a){
            if(prev==a) c[c.size()-1]+=1;
            else c.push_back(a);
        }
        prev=a;
    }
    
    prev=0;
    for(int i=0;i<m;i++){
        cin>>a;
        if(a){
            if(prev==a) d[d.size()-1]+=1;
            else d.push_back(a);
        }
        prev=a;
    }

    vector<int>div=getdiv(k);
    for(int dv:div){
        ll l=0,r=0;
        for(int it:c)
            l+=max(it-dv+1,0);
        
        for(int it:d)
            r+=max({it-k/dv+1,0});
        ans+=l*r;
    }
    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();
    
    return 0;
}