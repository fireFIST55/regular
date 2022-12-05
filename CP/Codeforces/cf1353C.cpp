#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cerr.tie(NULL);                  \
    cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t;
    cin>>t;
    unsigned long long int n,total;
    for(i=0;i<t;i++){
        cin>>n;
        total=(((n/2)*((n/2)+1))/2)*((n-1)*4);
        cout<<total<<"\n";
    }
    return 0;
}
