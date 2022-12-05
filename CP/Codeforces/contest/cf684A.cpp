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
    int i,t,n;
    ll c0,c1,h,total,one,zero;
    cin>>t;
    while(t--){
        string str;
        cin>>n>>c0>>c1>>h;
        cin>>str;
        for(i=0,one=0,zero=0;str[i];i++){
            if(str[i]=='1')
                one++;
            else
                zero++;
        }
        if(c0>c1&&h+c1<c0)
            total=(h+c1)*zero+one*c1;
        else if(c1>c0&&h+c0<c1)
            total=(h+c0)*one+zero*c0;
        else
            total=zero*c0+one*c1;
        cout<<total<<"\n";
    }
    return 0;
}
