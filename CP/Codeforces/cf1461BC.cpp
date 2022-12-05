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
        int n,m;
        cin>>n>>m;
        int sub[n][m],count=0;
        char spruce[n][m+3];
        for(int i=0;i<n;i++)
            cin>>spruce[i];
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<m;j++){
                if(spruce[i][j]=='*'){
                    sub[i][j]=1;
                    if(i<n-1&&j&&j<m-1)
                        sub[i][j]+=min(min(sub[i+1][j],sub[i+1][j-1]),sub[i+1][j+1]);
                    count+=sub[i][j];
                }
                else
                    sub[i][j]=0;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}