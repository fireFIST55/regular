#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int check(ull vanilla,ull choco,ull n,ull m){
    if(vanilla<m)
        return 0;
    else
        vanilla-=m;
    if(vanilla+choco>=n)
        return 1;
    else
        return 0;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int ans=1;
        ull vanilla,choco,n,m,x;
        cin>>vanilla>>choco>>n>>m;
        if(vanilla<choco)
            ans=check(vanilla,choco,n,m);
        else if(choco<vanilla)
            ans=check(choco,vanilla,n,m);
        else{
            if(vanilla>=m){
                vanilla-=m;
                ans=(vanilla+choco)>=n?1:0;
            }
            else
                ans=0;
        } 
        if(ans)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}