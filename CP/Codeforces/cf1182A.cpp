#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n;
    long long int total;
    cin>>n;
    if(!(n%2)){
        n/=2;
        total=pow(2,n);
        cout<<total;
    }
    else
        cout<<0;
    return 0;
}
