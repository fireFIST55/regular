#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    string ab;
    cin>>ab;
    int x=2*ab.length()+3;
    cout<<5<<"\n"<<"L "<<2<<"\n"<<"L "<<2<<"\n"<<"L "<<2<<"\n"<<"R "<<2<<"\n"<<"R "<<x<<"\n";
    return 0;
}