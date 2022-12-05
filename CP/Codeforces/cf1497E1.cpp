#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int primeFac(int n){
    int rep=0,ans=1;
    while(!(n%2)){
        n/=2;
        rep+=1;
    }
    rep&1?ans=2:ans;
    for(int i=3;i*i<=n;i++){
        if(!(n%i)){
            rep=0;
            while(!(n%i)){
                n/=i;
                rep+=1;
            }
            rep&1?ans*=i:ans;
        }
    }
    if(n>1)
        ans*=n;
    ans==1?ans=-1:ans;
    return ans;
}
void solve(){
    int n,k,a,ans=1,y=0;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        vec[i]=primeFac(vec[i]);
    }
    for(int i=0;i<n;i++){
        int x;
        map<int,int>mp;
        while(i<n){
            x=vec[i];
            //cout<<"i:\t"<<i<<"Number:\t"<<vec[i]<<" square:\t"<<x<<endl;
            if(mp[x]){
               ans+=1;
               y=x;
               break; 
            }
            else
                mp[x]+=1;
            i+=1;
        }
        //cout<<"Ans:\t"<<ans<<endl<<endl;
        i-=1;
    }
    //cout<<endl;
    cout<<ans<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}