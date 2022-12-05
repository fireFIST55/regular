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
        string s;
        cin>>s;
        int length=s.length(),total0=0,total1=0,zero=0,one=0,ans=0;
        for(int i=0;i<length;i++){
            if(s[i]=='1')
                total1+=1;
            else
                total0+=1;
        }
        for(int i=0;i<length;i++){
            if(s[i]=='1')
                one+=1;
            else
                zero+=1;
            int x=total1-one,y=total0-zero,a=min(x,y),b=min(one,zero),c=a+b;
            ans=i?min(ans,c):c;
        }
        cout<<ans<<"\n";
    }
    return 0;
}