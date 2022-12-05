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
        string a;
        cin>>a;
        for(int i=0;a[i];i++){
            if(i&1)
                a[i]=a[i]=='z'?'y':'z';
            else
                a[i]=a[i]=='a'?'b':'a';
        }
        cout<<a<<"\n";
    }
    return 0;
}