#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,j,t,first,second,count;
    cin>>t;
    while(t--){
        string str;
        char trac[200010];
        cin>>str;
        for(i=0,first=0,second=0,j=0,count=0;str[i];i++){
            if(str[i]=='(')
                first++;
            else if(str[i]=='[')
                second++;
            else if(str[i]==']'){
                if(second){
                    count++;
                    second--;
                }
            }
            else if(str[i]==')'){
                if(first){
                    count++;
                    first--;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
