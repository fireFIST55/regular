#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int n,d=0,k=0;
    string str;
    cin>>n>>str;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        if(str[i]=='D') d+=1;
        else k+=1;
        vp.push_back({d,k});
        if(!d||!k)  cout<<i+1<<' ';
        else if(d==1||k==1) cout<<1<<' ';
        else{
            int gd=__gcd(d,k);
            if(gd==1)   cout<<1<<' ';
            else{
                bool yes=0;
                int ans,h=d/gd+k/gd;
                for(int j=h-1;j<=i&&!yes;j+=h){
                    int x=vp[j].first,y=vp[j].second;
                    if(j!=h-1)  x-=vp[j-h].first,y-=vp[j-h].second;
                    if(x!=d/gd&&y!=k/gd)
                        yes=1;
                }
                if(yes){
                    for(int l=sqrt(gd);l>=2&&!yes;l--){
                        if(!(gd%l)){
                            int h=d/l+k/l;
                            for(int j=h-1;j<=i&&!yes;j+=h){
                                int x=vp[j].first,y=vp[j].second;
                                if(j!=h-1)  x-=vp[j-h].first,y-=vp[j-h].second;
                                if(x!=d/l&&y!=k/l){
                                    yes=1;
                                    ans=l;
                                }
                            }
                        }
                    }
                    if(yes) cout<<1<<' ';
                    else    cout<<ans<<' ';
                }
                else    cout<<gd<<' ';
            }
        }   
    }
    cout<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}