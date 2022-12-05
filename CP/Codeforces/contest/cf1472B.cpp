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
        int a,n,one=0,two=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a&1)
                one+=1;
            else
                two+=1;
        }
        if(one&1)
            cout<<"NO\n";
        else if(two&1){
            if(one)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"YES\n";
    }
    return 0;
}