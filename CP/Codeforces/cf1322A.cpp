#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,close=0,open=0,size=0,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='(')
            open+=1;
        else
            close+=1;
        if(open==close)
            size=open=close=0;
        else if(close&&!open){
            i+=1;
            size=1;
            while(i<n&&close!=open){
                if(s[i]=='(')
                    open+=1;
                else
                    close+=1;
                size+=1;
                i+=1;
            }
            if(open!=close)
                break;
            ans+=size;
            close=size=open=0;
            i-=1;
        }
    }
    if(open||close)
        cout<<-1;
    else
        cout<<ans;
    cout<<"\n";
    return 0;
}