#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    map<char,pair<int,int>>tr;
    tr['L']={-1,0};
    tr['R']={1,0};
    tr['U']={0,1};
    tr['D']={0,-1};
    map<int,pair<int,int>>ans;
    map<pair<int,int>,int>mp;
    mp[{0,0}]=0;

    for(int i=0;s[i];i++){
        pair<int,int>pii=tr[s[i]];
        x+=pii.first,y+=pii.second;
        if(mp[{x,y}]){
            int len=i+1-mp[{x,y}];
            if(len==1){
                cout<<mp[{x,y}]+1<<" "<<i+1<<endl;
                return;
            }
            else{
                ans[len]={mp[{x,y}],i+1};
                mp[{x,y}]=i+1;
            }
        }
        else{
            int len=i+1-1;
            if(!x&&!y){
                if(len==1){
                    cout<<1<<" "<<i+1<<endl;
                    return;
                }
                else
                    ans[len]={0,i+1};
            }
            mp[{x,y}]=i+1;
        }
    }
    if(ans.size()){
        for(auto pii:ans){
            pair<int,int>pi=ans[pii.first];
            cout<<pi.first+1<<' '<<pi.second<<endl;
            return;
        }
    }
    else cout<<-1<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}