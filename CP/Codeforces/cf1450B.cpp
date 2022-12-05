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
        int x,n,k,ans=-1;
        cin>>n>>k;
        int arr[n][n];
        for(int i=0;i<n;i++)
            cin>>arr[i][0]>>arr[i][1];
        for(int i=0;i<n;i++){
            int x1=arr[i][0],y1=arr[i][1];
            for(int j=0;j<n;j++){
                int x2=arr[j][0],y2=arr[j][1];
                x=-(x1+x2)+2*max(x1,x2)+-(y1+y2)+2*max(y1,y2);
                if(x>k)
                    break;
            }
            if(x<=k){
                ans=1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
