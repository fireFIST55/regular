#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
map<string,bool>mp,isVisited;
struct node{
    string s;
    int cnt;
    node(string a,int c){s=a;cnt=c;};
};
int BFS(string start,string finish){
    node u(start,0);
    isVisited.clear();
    isVisited[start]=1;
    queue<node>q;
    q.push(u);
    while(!q.empty()){
        node u=q.front();
        string temp=u.s;
        q.pop();
        if(mp[temp])
            continue;
        if(temp==finish)
            return u.cnt;
        for(int i=0;i<3;i++){
            temp[i]+=1;
            temp[i]==('z'+1)?temp[i]='a':1;
            if(!isVisited[temp]){
                isVisited[temp]=1;
                node v(temp,u.cnt+1);
                q.push(v);
            }
            string temp1=u.s;
            temp1[i]-=1;
            temp1[i]==('a'-1)?temp1[i]='z':1;
            if(!isVisited[temp1]){
                isVisited[temp1]=1;
                node v(temp1,u.cnt+1);
                q.push(v);
            }
        }
    }
    return -1;
}
int main(void){
    encoding_898;
    int t,cs=1;
    cin>>t;
    while(t--){
        int n;
        string start,finish;
        cin>>start>>finish>>n;
        for(int i=0;i<n;i++){
            string a,b,c;
            cin>>a>>b>>c;
            for(int j=0;j<a.size();j++){
                string x;
                x+=a[j];
                for(int k=0;k<b.size();k++){
                    x+=b[k];
                    for(int l=0;l<c.size();l++){
                        x+=c[l];
                        mp[x]=1;
                        x.erase(x.end()-1,x.end());
                    }
                    x.erase(x.end()-1,x.end());
                }
                x.erase(x.end()-1,x.end());
            }
        }
        int ans=BFS(start,finish);
        cout<<"Case "<<cs++<<": "<<ans<<endl;
        mp.clear();
    }
    return 0;
}