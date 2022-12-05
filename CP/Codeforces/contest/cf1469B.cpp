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
        int n,m,ans=0,ans1=0,one=0,two=0;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            ans+=vec[i];
            one=one>ans?one:ans;
        }
        cin>>m;
        vector<int>vec1(m);
        for(int i=0;i<m;i++){
            cin>>vec1[i];
            ans1+=vec1[i];
            two=two>ans1?two:ans1;
        }
        cout<<one+two<<"\n";
    }
    return 0;
}