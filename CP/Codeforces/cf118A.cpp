#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    encoding_898;
    string str,str1;
    char ch;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        ch=tolower(str[i]);
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='y'){
            str1.push_back('.');
            str1.push_back(ch);
        }
    }
    cout<<str1<<"\n";
    return 0;
}
