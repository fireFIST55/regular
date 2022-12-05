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
        string a;
        int n,k,l=1,total=0,zero=0;
        cin>>n>>k;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='0')
                zero+=1;
            else if(l){
                total+=(zero/(k+1));
                zero=0;
                l=0;
            }
            else{
                l=0;
                if(zero>(k*2)){
                    total+=(zero/(k+1));
                    if((zero%(k+1))<k)
                        total-=1;
                }
                zero=0;
            }
        }
        if(zero&&!l)
            total+=(zero/(k+1));
        else if(l)
            total=((zero-1)/(k+1))+1;
        if(n==k&&zero==n)
            total=1;
        cout<<total<<"\n";
    }
    return 0;
}