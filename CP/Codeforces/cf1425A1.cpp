#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        ull n,total=0;
        cin>>n;
        while(n){
            if((n&1)||(n>8&&(!(n%4)))){
                total+=1;
                n-=1;
            }
            else{
                total+=n/2;
                n/=2;
            }
            if((n&1)||(n>8&&(!(n%4))))
                n-=1;
            else
                n/=2;
        }
        cout<<total<<"\n";
    }
    return 0;
}