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
    char str[8][11],str1[10][11];
    int i,j;
    map<string,int>a;
    for(i=0;i<8;i++){
        for(j=0;j<10;j++)
            cin>>str[i][j];
        str[i][j]='\0';
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            cin>>str1[i][j];
        str1[i][j]='\0';
        a[str1[i]]=i;
    }
    for(i=0;i<8;i++)
        cout<<a[str[i]];
    return 0;
}
