#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int a,t,n;
    unsigned long long int j,total;
    cin>>t;
    while(t--){
        cin>>n;
        n/=2;
        j=1;
        total=0;
        while(n--){
            total+=(8*j*j);
            j++;
        }
        cout<<total<<"\n";
    }
    return 0;
}

