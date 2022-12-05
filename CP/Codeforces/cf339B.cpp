#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,n;
    long long int now=1,x,m,total=0;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>x;
        if(now>x)
            total+=(n-now)+x;
        else
            total+=(x-now);
        now=x;
    }
    cout<<total;
    return 0;
}
