#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int phi(int n){
    int i=0,x=n,ok;
    double y=n;
    while(!(n%2)){
        i=2;
        n/=2;
    }
    if(i)
        y*=(1.0-(1.0/i));
    for(i=3;i<=sqrt(n);i+=2){
        if(!(n%i)){
            n/=i;
            y*=(1.0-(1.0/i));
        }
    }
    if(n>1)
        y*=(1.0-(1.0/n));
    ok=y;
    return ok;
}
int main(void){
    encoding_898;
    int i,j,t,a,b;
    unsigned long long int count,total;
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>a>>b;
        for(i=a,total=0;i<=b;i++){
            count=phi(i);
            total+=count*count;
        }
        cout<<"Case "<<k<<": "<<total<<"\n";
    }
    return 0;
}
