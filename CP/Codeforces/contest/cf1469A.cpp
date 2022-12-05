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
        int open=0,close=0,ans=1,ques=0,x=0;
        string str;
        cin>>str;
        for(int i=0;str[i];i++){
            if(str[i]=='('){
                open++;
                x=0;
            }
            else if(str[i]==')'){
                if(!open&&!ques){
                    ans=0;
                    break;
                }
                else{
                    if(open)
                        open--;
                    else
                        ques--;
                }
                x=1;
            }
            else{
                ques++;
                x=1;
            }
        }
        if(ans&&(open||ques)){
            if(!open&&(ques%2))
                ans=0;
            else if(open&&(!x||ques<open||((ques-open)%2)))
                ans=0;
        }
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}