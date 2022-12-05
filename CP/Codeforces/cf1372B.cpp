#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int a,x=1;
        cin>>a;
        if(a&1){
            int i;
            for(i=3;i<=sqrt(a);i+=2){
                if(!(a%i)){
                    x=1;
                    break;
                }
            }
            if(x){
                ll y=a/i,z=(a-a/i),z1=y*z,lcm=z1/__gcd(y,z);
                if(lcm<a)
                    cout<<a/i<<" "<<a-a/i<<"\n";
                else
                    cout<<1<<" "<<a-1<<"\n";
            }
            else
                cout<<1<<" "<<a-1<<"\n";
        }
        else
            cout<<a/2<<" "<<a/2<<"\n";
    }
    return 0;
}