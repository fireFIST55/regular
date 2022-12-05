#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ull unsigned long long
ull arr[100];
bool done=false;
map<ull,int>mp;
int n;
void DFS(ull x,vector<ull>&ans,int p){
    map<ull,int>xp;
    if(!done&&p==n){
        for(auto it:ans)    cout<<it<<' ';
        cout<<endl;
        done=true;
        return;
    }
    if(!done&&(p==n-1||(!(x%3)&&mp[x/3]&&(mp[x/3]-xp[x/3]))||(mp[x*2]&&(mp[x*2]-xp[x*2])))){
        if(p==n-1){
            ans.push_back(x);
            DFS(x,ans,p+1);
        }
        if(!(x%3)&&(mp[x/3]-xp[x/3])){
            xp[x/3]+=1;
            ans.push_back(x);
            DFS(x/3,ans,p+1);
        }
        if(mp[x*2]&&(mp[x*2]-xp[x*2])){
            xp[x*2]+=1;
            ans.push_back(x);
            DFS(x*2,ans,p+1);
        }
    }
    else
        return;
}
int main(void){
    encoding_898;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]+=1;
    }
    for(int i=0;i<n&&!done;i++){
        vector<ull>ans;
        DFS(arr[i],ans,0);
    }
    return 0;
}