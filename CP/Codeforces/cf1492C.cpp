#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    string a,b;
    int n,m,ans=0;
    cin>>n>>m>>a>>b;
    vector<int>right(m);
    for(int i=n-1,j=m-1;i>=0&&j>=0;i--){
        if(a[i]==b[j]){
            right[j]=i;
            j-=1;
        }
    }
    for(int i=0,j=0;i<n&&j<m-1;i++,j++){
        while(a[i]!=b[j])
            i+=1;
        ans=max(ans,abs(i-right[j+1]));
    }
    cout<<ans<<"\n";
    return 0;
}