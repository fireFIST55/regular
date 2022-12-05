#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,n,m;
    cin>>n>>m;
    string str[n],a,b;
    map<string,string>x;
    while(m--){
        cin>>a>>b;
        if(a.length()>b.length())
            x[a]=b;
        else
            x[a]=a;
    }
    for(i=0;i<n;i++){
        cin>>a;
        cout<<x[a]<<" ";
    }
    return 0;
}
