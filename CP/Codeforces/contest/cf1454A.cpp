#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        if(n&1){
            for(i=n;i;i--){
                if(i==n/2)
                    cout<<n/2+1<<" ";
                else if(i==n/2+1)
                    cout<<n/2<<" ";
                else
                    cout<<i<<" ";
            }
        }
        else{
            for(i=n;i;i--)
                cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
