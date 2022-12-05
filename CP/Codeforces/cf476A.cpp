#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,m;
    cin>>n>>m;
    if(m>n)
        cout<<-1;
    else{
        int moves,x=0,extra=0,yes=1;
        moves=n/2+n%2;
        if(n%2)
            x=1;
        if(moves%m){
            extra=m-moves%m;
            if(extra>moves-x)
                yes=0;
        }
        if(yes)
            cout<<moves+extra;
        else
            cout<<-1;
    }
    return 0;
}
