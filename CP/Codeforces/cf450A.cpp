#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,n,m,a,index=-1,rep=0;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a;
        if(a>m&&((((a%m)&&(rep<=(a/m)+1)))||(!(a%m)&&rep<=a/m))){
            rep=a/m;
            if(a%m)
                rep+=1;
            index=i;
        }
    }
    index+=1;
    if(index)
        cout<<index;
    else
        cout<<n;
    return 0;
}
