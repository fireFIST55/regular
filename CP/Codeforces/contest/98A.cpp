#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,x,y,z,total;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x==y)
            total=x*2;
        else if(x==y-1)
            total=x*2+1;
        else if(y==x-1)
            total=y*2+1;
        else{
            z=min(x,y);
            total=z*2+(x-z+y-z)*2-1;
        }
        cout<<total<<"\n";
    }
    return 0;
}
