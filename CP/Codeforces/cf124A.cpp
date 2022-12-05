#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int a,b,n;
    cin>>n>>a>>b;
    if((n-a-1)<=b)
        cout<<(n-a)<<"\n";
    else
        cout<<b+1<<"\n";
    return 0;
}
