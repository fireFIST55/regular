#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t,n,m,one=0,moves;
    cin>>t;
    while(t--){
        cin>>n>>m;
        moves=0;
        char bin[n][m];
        int j,track[n][m],on[4][2];
        for(i=0;i<n;i++)
            cin>>bin[i];
        for(i=0;i<n-1;i++){
            for(j=1,one=0;j<m;j++){
                if(bin[i][j-1]=='1'){
                    on[one][0]=i;
                    on[one][1]=j;
                    one++;
                }
                if(bin[i][j]=='1'){
                    on[one][0]=i;
                    on[one][1]=j;
                    one++;
                }
                if(bin[i+1][j]=='1'){
                    on[one][0]=i;
                    on[one][1]=j;
                    one++;
                }
                if(bin[i+1][j-1]=='1'){
                    on[one][0]=i;
                    on[one][1]=j;
                    one++;
                }
                if(one==4){
                    bin[i][j-1]='0';
                    bin[i][j]='0';
                    bin[i+1][j-1]='0';
                }
                else if(one==3){
                    bin[on[0][0]][on[0][0]]]='0';
                    bin[on[1][0]][on[1][0]]='0';
                    bin[on[2][0]][on[2][0]]='0';
                }
                else if(one==2){
                    if(j<m-1){
                        bin[on[0][0]][on[0][1]]='0'
                    }
                }
            }

        }
    }
}
