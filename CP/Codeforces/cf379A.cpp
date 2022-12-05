#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int a,b,total=0,rem=0;
    cin>>a>>b;
    do{
        while(a){
            total+=a;
            rem+=(a%b);
            a/=b;
        }
        a=rem/b;
        rem%=b;
    }while(a);
    cout<<total;
    return 0;
}
