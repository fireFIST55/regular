#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    int i=0,n,cnt=0,pos=-1,curr=-1;
    cin>>n;
    ll ans=0;
    string str;
    cin>>str;
    for(auto it:str)    cnt+=it=='*'?1:0;
    for(auto it:str){
        if(it=='*'){
            curr+=1;
            if(curr==cnt/2){
                pos=i;
                break;
            }
        }
        i+=1;
    }
    curr=pos-cnt/2;
    for(int i=0;i<n;i++){
        if(str[i]=='*'){
            ans+=abs(curr-i);
            curr+=1;
        }
    }
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