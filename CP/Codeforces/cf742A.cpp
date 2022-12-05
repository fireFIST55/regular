#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int index[]={6,8,4,2};
    long long int n;
    cin>>n;
    if(!n)
        cout<<1;
    else
        cout<<index[n%4];
    return 0;
}
