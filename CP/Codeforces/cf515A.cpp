#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    long long int a,b,s;
    cin>>a>>b>>s;
    if(a<0)
        a*=-1;
    if(b<0)
        b*=-1;
    if((a+b==s)||(a+b<s&&!((s-a-b)%2)))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
