#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,j,t,n,m;
    long long int x,y,total;
    char ch,ch1;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y;
        for(i=0,total=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ch;
                if(j&&ch=='.'&&ch1=='.'&&x*2>y){
                    total+=(-x+y);
                    ch1='*';
                }
                else{
                    if(ch=='.')
                        total+=x;
                    ch1=ch;
                }
            }
        }
        cout<<total<<"\n";
    }
    return 0;
}
