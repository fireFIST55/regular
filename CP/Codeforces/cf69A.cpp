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
    int i,n,x=0,y=0,z=0,a,b,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(!x&&!y&&!z)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
