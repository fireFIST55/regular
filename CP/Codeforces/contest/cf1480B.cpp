#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n,tot=0;
        int att,health,x;
        cin>>att>>health>>n;
        vector<int>at(n);
        vector<pair<int,int>>pa;
        for(int i=0;i<n;i++)
            cin>>at[i];
        for(int i=0;i<n;i++){
            cin>>x;
            pa.push_back(make_pair(at[i],x));
        }
        sort(pa.begin(),pa.end());
        for(int i=0;i<n;i++){
            x=pa[i].second;
            at[i]=pa[i].first;
            if(health>0){
                int y=!(x%att)?(x/att):((x/att)+1);
                int z=!(health%at[i])?(health/at[i]):((health/at[i])+1);
                health-=(y*at[i]);
                if(y<=z)
                    tot+=1;
            }
        }
        if(tot==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}