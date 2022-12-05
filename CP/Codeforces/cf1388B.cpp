#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        x=n/4;
        if(n%4)
            x+=1;
        for(i=1;i<=n;i++){
            if(i>=(n-x+1))
                cout<<8;
            else
                cout<<9;
        }
        cout<<"\n";
    }
}
