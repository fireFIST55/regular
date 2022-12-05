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
    int n,k,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        double x=((k/1.0)/(100/1.0)),y,z;
        ll a,b=0,c,total=0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(i){
                y=((a/1.0)/(b/1.0));
                if(y>=x){
                    c=(((a*100)+k-1)/(k/1.0));
                    total+=(c-b);
                    b+=(c-b);
                }
            }
            b+=a;
        }
        cout<<total<<"\n";
    }
    return 0;
}