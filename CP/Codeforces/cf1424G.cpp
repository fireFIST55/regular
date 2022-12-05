#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,a,b,count=0,i=0,ans=0,ans1=0;
    cin>>n;
    map<int,int>X;
    while(n--){
        int a,b;
        cin>>a>>b;
        X[a]+=1;
        X[b]-=1;
    }
    for(auto it=X.begin();it!=X.end();it++){
        count+=it->second;
        if(count>ans){
            ans=count;
            ans1=it->first;
        }
    }
    cout<<ans1<<" "<<ans<<"\n";
    return 0;
}