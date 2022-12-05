#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n;
        vector<pair<int,int>>vec;
        ll total_res=0,total_del=0;
        int x[n];
        for(int i=0;i<n;i++)
            cin>>x[i];
        for(int i=0;i<n;i++){
            cin>>a;
            vec.push_back({x[i],a});
        }
        sort(vec.begin(),vec.end());
        for(int i=n-1;i>=0;i--){
            if(total_res+vec[i].second>=vec[i].first){
                total_del=(ll)vec[i].first;
                 break;
            }
            else
                total_res+=vec[i].second;
        }
        ll ans=max(total_res,total_del);
        cout<<ans<<"\n";
    }
    return 0;
}