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
        string s;
        int a,n,m;
        cin>>n>>m>>s;
        vector<int>moves(n),ans(26);
        for(int i=0;i<m;i++){
            cin>>a;
            moves[a-1]+=1;
        }
        for(int i=n-1,a=1;i>=0;i--){
            a+=moves[i];
            ans[s[i]-97]+=a;
        }
        for(int i=0;i<26;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}