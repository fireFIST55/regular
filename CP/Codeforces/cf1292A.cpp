#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,q,a,b,cnt=0;
    cin>>n>>q;
    char mp[2][n+5];
    memset(mp,'.',sizeof(mp));
    
    for(int i=0;i<q;i++){
        cin>>a>>b;
        a-=1,b-=1;
        int x=a?0:1;
        char &ref=mp[a][b];
        if(ref=='.'){
            ref='*';

            if(b-1>=0&&mp[x][b-1]=='*')
                cnt+=1;
            if(b+1<n&&mp[x][b+1]=='*')
                cnt+=1;
            mp[x][b]=='*'?cnt+=1:1;
        }
        else{
            ref='.';

            if(b-1>=0&&mp[x][b-1]=='*')
                cnt-=1;
            if(b+1<n&&mp[x][b+1]=='*')
                cnt-=1;
            mp[x][b]=='*'?cnt-=1:1;
        }
        !cnt?cout<<"Yes\n":cout<<"No\n";
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();

    return 0;
}