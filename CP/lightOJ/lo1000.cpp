#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int a,b,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        cout<<"Case "<<i+1<<": "<<a+b<<"\n";
    }
    return 0;
}
