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
        if(n==1)
            cout<<-1;
        else{
            n-=1;
            while(n--){
                cout<<5;
            }
            cout<<8;
        }
        cout<<"\n";
    }
    return 0;
}
