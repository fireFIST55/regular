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
    string str,str1="hello";
    cin>>str;
    int i,j=0;
    for(i=0;str[i]!='\0'&&j<5;i++)
    {
        if(str[i]==str1[j])
            j+=1;
    }
    if(j==5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
