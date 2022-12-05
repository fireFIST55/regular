#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int q,index=1;
    set<pair<int,int>>mo,po;
    pair<int,int>pii;
    cin>>q;
    while(q--){
        int a,ans;
        cin>>a;
        if(a==1){
            int m;
            cin>>m;
            mo.insert({index,m});
            po.insert({-m,index});
            index+=1;
        }
        else if(a==2){
            auto const &it=mo.begin();
            pii=*it;
            ans=pii.first;
            mo.erase({pii.first,pii.second});
            po.erase({-pii.second,pii.first});
            cout<<ans<<" ";
        }
        else{
            auto const &it=po.begin();
            pii=*it;
            ans=pii.second;
            po.erase({pii.first,pii.second});
            mo.erase({pii.second,-pii.first});
            cout<<ans<<" ";
        }
    }
    return 0;
}