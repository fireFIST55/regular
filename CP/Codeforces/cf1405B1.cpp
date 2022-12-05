#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t,n;
    long long int b,neg,pos,min,total;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0,pos=0,neg=0;i<n;i++){
            cin>>b;
            if(b>0)
                pos+=b;
            else if(b<0){
                b*=-1;
                min=pos<b?pos:b;
                neg+=(b-min);
                pos-=min;
            }
        }
        min=pos<neg?pos:neg;
        pos-=min;
        neg-=min;
        total=min+pos+neg;
        cout<<total<<"\n";
    }
    return 0;
}
