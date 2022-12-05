#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    char a[100005],b[100005];
    cin>>a>>b;
    int length=strlen(a),length1=strlen(b);
    if(strcmp(a,b)){
        if(length>length1)
            cout<<length;
        else
            cout<<length1;
    }
    else
        cout<<-1;
    return 0;
}
