#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n;
        cout<<n-2<<"\n";
        for(int i=0,x=n,y=n-1;i<n-2;i++,x--,y--){
            cout<<x<<" "<<y<<"\n";
        }
    }
    return 0;
}