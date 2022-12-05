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
        char str[9][15];
        for(int i=0;i<9;i++)
            cin>>str[i];
        int k=3,i=0,j=0;
        char a=str[2][3],b=str[2][6];
        while(k--){
            for(int m=0,k=j;m<3;m++,i++,k+=3){
                if(i<8)
                    str[i][k]=str[i][k+1];
                else
                    str[i][k]=str[i][k-1];
            }
            j+=1;
        }
        str[6][2]=(a==str[7][2])?str[8][2]:str[7][2];
        str[7][5]=(b==str[8][5])?str[6][5]:str[8][5];
        for(int i=0;i<9;i++)
            cout<<str[i]<<"\n";
    }
    return 0;
}