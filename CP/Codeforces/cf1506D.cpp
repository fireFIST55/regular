#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    priority_queue<int>q;
    map<int,int>mp;
    int n,x,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]+=1;
    }
    for(auto it:mp)
        q.push(it.second);
    ans=n;
    while(q.size()>=2){
        int cnt=q.top();
        q.pop();
        int cnt1=q.top();
        q.pop();
        cnt--;
        cnt1--;
        ans-=2;
        if(cnt) q.push(cnt);
        if(cnt1) q.push(cnt1);
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