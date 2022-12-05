#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long int>a(2*n);
        for(i=0;i<2*n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        cout<<a[n]-a[n-1]<<"\n";
    }
    return 0;
}
