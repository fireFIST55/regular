#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,x,yes;
    cin>>t;
    long long int r,g,b,w,min;
    while(t--){
        cin>>r>>g>>b>>w;
        yes=0;
        x=0;
        min=r<g?r<b?r:b:g<b?g:b;
        if(!(w%2))
            x++;
        if(!(r%2))
            x++;
        if(!(g%2))
            x++;
        if(!(b%2))
            x++;
        if((x==4)||(!x&&min)||(x==3&&(r+g+w+b)%2)||(x==1&&min&&(r+g+b+w)%2))
            yes=1;
        if(yes)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<"\n";
    }
    return 0;
}


