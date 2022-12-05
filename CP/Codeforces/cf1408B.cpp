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
        int n,k,a,b,count=1;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a;
            if(i&&b!=a)
                count+=1;
            b=a;
        }
        if(count>1&&k==1)
            cout<<-1<<"\n";
        else if(count<=k)
            cout<<1<<"\n";
        else{
            int x=0;
            if((count-k)%(k-1))
                x=1;
            cout<<1+(count-k)/(k-1)+x<<"\n";
        }
    }
    return 0;
}