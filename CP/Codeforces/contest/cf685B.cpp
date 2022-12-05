#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t,n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        string str;
        cin>>str;
        while(q--){
            int l,r,found=0;
            cin>>l>>r;
            for(i=l-2;i>=0;i--){
                if(str[i]==str[l-1]){
                    found=1;
                    break;
                }
            }
            if(!found){
                for(i=r;i<str.length();i++){
                    if(str[i]==str[r-1]){
                        found=1;
                        break;
                    }
                }
            }
            if(found)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
    return 0;
}
