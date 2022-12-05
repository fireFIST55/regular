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
        int a,b,n,x,m,first=0,second=0;
        cin>>n>>x>>m;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            if(!first){
                if(x>=a&&x<=b){
                    first=a;
                    second=b;
                }
            }
            else{
                if(a>=first&&a<=second)
                    second=max(b,second);
                else if(b>=first&&b<=second)
                    first=min(first,a);
                else if(a<=first&&b>=second){
                    first=a;
                    second=b;
                }
            }
        }
        cout<<(second-first+1)<<"\n";
    }
    return 0;
}