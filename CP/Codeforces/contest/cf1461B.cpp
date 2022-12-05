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
        int n,m,count=0;
        cin>>n>>m;
        char in[n][m+2];
        int rec[n][m]={0},rec1[n][m];
        for(int i=0;i<n;i++)
            cin>>in[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(in[i][j]=='*'){
                    count++;
                    rec[i][j]=1;
                    rec1[i][j]=1;
                    if(rec[i-1][j])
                        rec[i][j]+=rec[i-1][j];
                    if(rec1[i][j-1])
                        rec1[i][j]+=rec1[i][j-1];
                    if(rec1[i][j]>2){
                        for(int k)
                    }
                }
                else{
                    rec[i][j]=0;
                    rec1[i][j]=0;
                }    
            }
        }
    }
}