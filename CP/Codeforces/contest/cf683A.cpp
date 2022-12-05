#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<n<<"\n";
        for(int i=1;i<=n;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
