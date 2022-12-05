#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int solve(){
    int n,a,b,c,count1=0,count2=0,res;
    cin>>n;
    vector<int>adjList[n+1];
    map<pair<int,int>,int>pii;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
        pii[{a,b}]=c;
    }
    int curr=1,next_city=adjList[1][0];
    for(int i=1;i<=n;i++){
        if(!pii[{curr,next_city}])  count1+=pii[{next_city,curr}];
        int temp=adjList[next_city][0];
        if(temp==curr)  temp=adjList[next_city][1];
        curr=next_city;
        next_city=temp;
    }
    curr=1,next_city=adjList[1][1];
    for(int i=1;i<=n;i++){
        if(!pii[{curr,next_city}])  count2+=pii[{next_city,curr}];
        int temp=adjList[next_city][0];
        if(temp==curr)  temp=adjList[next_city][1];
        curr=next_city;
        next_city=temp;
    }
    return min(count1,count2);
}
int main(void){
    encoding_898;
    int t,cs=1;
    cin>>t;
    while(t--){
        int ans=solve();
        cout<<"Case "<<cs++<<": "<<ans<<endl;
    }
    return 0;
}