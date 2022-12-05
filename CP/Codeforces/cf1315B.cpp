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
        int a,b,p;
        cin>>a>>b>>p;
        string s;
        cin>>s;
        int length=s.length(),ans=length;
        if(p<a&&p<b)
            cout<<length<<"\n";
        else{
            for(int i=length-2;i>=0;i--){
                while(i-1>=0&&s[i]==s[i-1])
                    i-=1;
                if(s[i]=='A'){
                    if(p>=a){
                        ans=i+1;
                        p-=a;
                    }
                    else
                        break;
                }
                else{
                    if(p>=b){
                        ans=i+1;
                        p-=b;
                    }
                    else
                        break;
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}