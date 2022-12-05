#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll x=0,res=0;
        for(ll i=0;s[i];i++){
            if(s[i]=='+')
                x+=1;
            else
                x-=1;
            res+=1;
            if(x==-1){
                res+=(i+1);
                x=0;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}