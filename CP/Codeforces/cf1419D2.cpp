#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,count=0;
    cin>>n;
    map<int,int>freq;
    vector<int>vec(n),ans;
    for(auto &it:vec)   cin>>it;
    sort(vec.begin(),vec.end());
    if(vec[0]==vec[n-1]||n<=2){
        cout<<0<<'\n';
        for(int i=0;i<n;i++)
            cout<<vec[i]<<" ";
        cout<<'\n';
    }
    else{
        int l=n&1?n/2:(n-1)/2;
        for(int i=l-1,j=n-1;i>=0;i--,j--){
            if(!freq[j]){
                ans.push_back(vec[j]);
                freq[j]+=1;
            }
            if(vec[j]>vec[i]&&vec[i]<vec[j-1])
                count+=1;
            ans.push_back(vec[i]);
            if(!freq[j-1]){
                ans.push_back(vec[j-1]);
                freq[j-1]+=1;
            }
        }
        if(!(n&1))
            ans.push_back(vec[(n-1)/2]);
        cout<<count<<'\n';
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<'\n';
    }
    return 0;
}