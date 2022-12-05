#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i=0,n,one=0,two=0;
    cin>>n;
    char st[2][15],str[15];
    while(n--){
        cin>>str;
        if(!i){
            strcpy(st[0],str);
            one++;
        }
        else if(i&&strcmp(st[0],str))
            strcpy(st[1],str);
        if(i&&!strcmp(str,st[0]))
            one++;
        else if(i)
            two++;
        i++;
    }
    if(one>two)
        cout<<st[0];
    else
        cout<<st[1];
    return 0;
}
