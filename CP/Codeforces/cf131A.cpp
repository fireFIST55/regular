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
    string str;
    cin>>str;
    char ch;
    int i,upper=0;
    for(i=0;str[i]!='\0';i++){
        if(isupper(str[i]))
            upper+=1;
    }
    if(str.length()==1||upper==str.length()||(upper==str.length()-1&&islower(str[0]))){
        for(i=0;str[i]!='\0';i++){
            if(isupper(str[i]))
                str[i]=tolower(str[i]);
            else
                str[i]=toupper(str[i]);
        }
    }
    cout<<str;
    return 0;
}
