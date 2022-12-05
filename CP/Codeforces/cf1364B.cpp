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
        int n;
        cin>>n;
        ll x=0,y=0;
        vector<ll>vec(n),ans;
        for(int i=0,j=0;i<n;i++)
            cin>>vec[i];
        ans.push_back(vec[0]);
        for(int i=1;i<n;i++){
            if(vec[i]>vec[i-1]){
                while(i+1<n&&vec[i+1]>vec[i])
                    i+=1;
                ans.push_back(vec[i]);
            }
            else{
                while(i+1<n&&vec[i+1]<vec[i])
                    i+=1;
                ans.push_back(vec[i]);
            }
        }
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}