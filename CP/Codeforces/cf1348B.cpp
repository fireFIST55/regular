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
        int n,k,ok=1,tot=0;
        cin>>n>>k;
        map<int,int>freq;
        vector<int>vec(n),ans;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(!freq[vec[i]]){
                tot+=1;
                ans.push_back(vec[i]);
            }
            freq[vec[i]]+=1;
        }
        if(tot>k)
            ok=0;
        if(ok){
            if(tot<k){
                for(int i=tot;i<=k;i++)
                    ans.push_back(1);
            }
            cout<<n*k<<"\n";
            for(int i=0;i<n;i++){
                for(int j=0;j<k;j++)
                    cout<<ans[j]<<" ";
            }
        }
        else
            cout<<-1;
        cout<<"\n";
    }
    return 0;
}