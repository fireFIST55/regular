#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int q;
    long long int a,b,n,s,x;
    cin>>q;
    while(q--){
        cin>>a>>b>>n>>s;
        x=s/n;
        if(x>=a)
            s-=a*n;
        else
            s-=x*n;
        if(s>b)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<"\n";
    }
    return 0;
}
