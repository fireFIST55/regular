#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        ll n,k,a,b;
        cin>>n>>k;
        string str(n,'a');
        ll p=1,q=1,r=2*k,x,m=sqrt(1+4*r);
        x=(-q+m)/(2);
        if((x*(x+1)/2)<k)
            x+=1;
        a=(n-x);
        ll y=(k==(x*(x+1))/2)?(n-a):(k-(x*(x-1))/2);
        b=n-y+1;
        str[a-1]='b';
        str[b-1]='b';
        cout<<str<<"\n";
    }
    return 0;
}