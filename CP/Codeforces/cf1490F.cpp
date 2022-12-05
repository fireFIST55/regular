#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int i,left=0,right,ans=1e6,n,a;
    cin>>n;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>a;
        freq[a]+=1;
    }
    map<int,int>groupbycnt;
    for(auto &it:freq)
        groupbycnt[it.second]+=1;
    i=freq.size();
    right=n;
    for(auto &it:groupbycnt){
        int x=left+right-i*it.first;
        ans=min(x,ans);
        left+=it.first*it.second;
        right-=it.first*it.second;
        i-=it.second;
    }
    cout<<ans<<"\n";
} 
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}