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
        int a,n,x,y;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(!i)
                x=a;
            else if(i==n-1)
                y=a;
        }
        if(x<y)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}