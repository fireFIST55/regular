#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n,u,r,d,l,down,left,right,up;
        cin>>n>>u>>r>>d>>l;
        left=l,right=r,up=u,down=d;
        u==n?left-=1,right-=1:left;
        d==n?left-=1,right-=1:left;
        l==n?up-=1,down-=1:up;
        r==n?up-=1,down-=1:up;
        u==n-1?right>left?right-=1:left-=1:up;
        d==n-1?right>left?right-=1:left-=1:up;
        l==n-1?up>down?up-=1:down-=1:up;
        r==n-1?up>down?up-=1:down-=1:up;
        (up<0||down<0||right<0||left<0)?cout<<"NO\n":cout<<"YES\n";
    }
    return 0;
}