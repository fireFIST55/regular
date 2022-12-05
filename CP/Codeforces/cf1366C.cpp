#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ull unsigned long long
void solve(){
    bool found=0;
    int n,m,change=0;
    cin>>n>>m;
    int matrix[n+1][m+1],dx[]={1,0},dy[]={0,1},dx1[]={-1,0},dy1[]={0,-1};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)    cin>>matrix[i][j];
    }
    map<pair<int,int>,int>mp1,mp2,X,Y;
    queue<pair<int,int>>first,last;
    first.push({1,1});
    last.push({n,m});
    change=matrix[1][1]!=matrix[n][m]?1:0;
    while(!found){
        int one=0,zero=0,lim;
        lim=first.size();
        for(int k=0;k<lim&&!found;k++){
            pair<int,int>pii=first.front();
            int x=pii.first,y=pii.second;
            first.pop();
            if(mp1[{x,y}])  continue;
            for(int i=0;i<2;i++){
                int x1=x+dx[i],y1=y+dy[i];
                if(x1<=n&&y1<=m&&!mp1[{x1,y1}]&&!X[{x1,y1}]){
                    if(Y[{x1,y1}]){
                        found=1;
                        break;
                    }
                    first.push({x1,y1});
                    X[{x1,y1}]=1;
                    matrix[x1][y1]?one+=1:zero+=1;
                }
            }
            mp1[{x,y}]=1;
        }
        lim=last.size();
        for(int k=0;k<lim&&!found;k++){
            pair<int,int>pii=last.front();
            int x=pii.first,y=pii.second;
            last.pop();
            if(mp2[{x,y}])  continue;
            for(int i=0;i<2;i++){
                int x1=x+dx1[i],y1=y+dy1[i];
                if(x1>=1&&y1>=1&&!mp2[{x1,y1}]&&!Y[{x1,y1}]){
                    if(X[{x1,y1}]){
                        found=1;
                        break;
                    }
                    last.push({x1,y1});
                    Y[{x1,y1}]=1;
                    matrix[x1][y1]?one+=1:zero+=1;
                }
            }
            mp2[{x,y}]=1;
        }
        if(!found)  change+=min(one,zero);
    }
    cout<<change<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}