#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    encoding_898;
    int a,b,c;
    cin>>a>>b>>c;
    if((a==1&&b==1&&c==1)||(a==1&&c==1))
        cout<<a+b+c;
    else if(a==1)
        cout<<(a+b)*c;
    else if(b==1){
        if(a>c)
            cout<<(b+c)*a;
        else
            cout<<(a+b)*c;
    }
    else if(c==1)
        cout<<(b+c)*a;
    else
        cout<<a*b*c;
    return 0;
}
