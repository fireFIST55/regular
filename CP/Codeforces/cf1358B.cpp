#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],ans=1;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int x=1;
        for(int i=0;i<n;i++,x++){
            if(x>=a[i])
                ans=i+2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
