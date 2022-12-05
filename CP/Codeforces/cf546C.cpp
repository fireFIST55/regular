#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int a,n,k1,k2,moves=0,ans=-1;
    cin>>n>>k1;
    queue<int>q1,q2;
    map<pair<queue<int>,queue<int>>,int>mp;
    while(k1--){
        cin>>a;
        q1.push(a);
    }
    cin>>k2;
    while(k2--){
        cin>>a;
        q2.push(a);
    }
    while(!q1.empty()&&!q2.empty()){
        int a=q1.front(),b=q2.front();
        q1.pop();
        q2.pop();
        if(a<b){
            q2.push(a);
            q2.push(b);
            ans=2;
        }
        else{
            q1.push(b);
            q1.push(a);
            ans=1;
        }
        moves+=1;
        if(mp[{q1,q2}]){
            ans=-1;
            break;
        }
        mp[{q1,q2}]=1;
    }
    ans>0?cout<<moves<<' '<<ans:cout<<ans;
    cout<<endl;
}
int main(void){
    encoding_898;
    solve();
    return 0;
}