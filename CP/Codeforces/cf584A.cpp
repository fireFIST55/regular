#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,n,t;
    cin>>n>>t;
    if(n==1&&t==10)
        cout<<-1;
    else if(t<10){
        for(i=0;i<n;i++)
            cout<<t;
    }
    else if(t==10){
        for(i=0;i<n/2;i++)
            cout<<t;
        if(n&1)
            cout<<0;
    }
    return 0;
}
