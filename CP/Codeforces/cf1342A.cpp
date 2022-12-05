#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t;
    long long int a,b,x,y,max,os;
    unsigned long long int total=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y>>a>>b;
        total=0;
        if(x||y){
            max=x<y?y:x;
            os=x+y-max;
            if(b<=a*2)
                total+=((os*b)+(max-os)*a);
            else
                total+=os*a+max*a;
        }
        cout<<total<<"\n";
    }
    return 0;
}
