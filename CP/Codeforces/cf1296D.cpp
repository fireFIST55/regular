#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,a,b,k,p,ans=0;
    vector<int>vc;
    cin>>n>>a>>b>>k;
    for(int i=0;i<n;i++){
        cin>>p;
        if(p%(a+b)&&p%(a+b)<=a) ans+=1;
        else{
            int x=p%(a+b);
            if(x){
                x-=a;
                if(x)   vc.push_back(x);
                else ans+=1;
            }
            else vc.push_back(b);
        }  
    }
    sort(vc.begin(),vc.end());

    for(int X:vc){
        int x=(X+a-1)/a;
        if(x<=k){
            k-=x;
            ans+=1;
        }
        else break;
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