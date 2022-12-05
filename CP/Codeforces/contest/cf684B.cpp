#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    encoding_898;
    int t,n,k,i,j,l,x,median;
    cin>>t;
    while(t--){
        ull a,total=0;
        cin>>n>>k;
        if(!(n&1))
            median=n/2;
        else
            median=n/2+1;
        for(i=0,j=0,l=0,x=0;i<n*k;i++){
            cin>>a;
            if(x)
                l++;
            if(n==1)
                total+=a;
            else if(n>2&&(n&1)&&i>=(n-median)*k&&l==j){
                j+=median;
                total+=a;
                x=1;
            }
            else if(n>2&&!(n&1)&&i>=(n-median-1)*k&&l==j){
                j+=median+1;
                total+=a;
                x=1;
            }
            else if(n==2&&!(i%2))
                total+=a;
        }
        cout<<total<<"\n";
    }
    return 0;
}
