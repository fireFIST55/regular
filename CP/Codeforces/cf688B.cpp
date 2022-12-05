#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    string str;
    cin>>str;
    cout<<str;
    for(int i=str.length()-1;i>=0;i--)
        cout<<str[i];
    return 0;
}
