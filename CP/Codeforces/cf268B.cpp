#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i=0,n,total=0;
    cin>>n;
    while(n--){
        total+=n+1+n*i;
        i++;
    }
    cout<<total;
    return 0;
}
