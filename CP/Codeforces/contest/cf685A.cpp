#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        ll i,n,total=0,z;
        cin>>n;
        if(n>3){
            if(!(n%2))
                total=2;
            else
                total=3;
        }
        else if(n==1)
            total=0;
        else if(n==2)
            total=1;
        else
            total=2;
        cout<<total<<"\n";
    }
    return 0;
}
