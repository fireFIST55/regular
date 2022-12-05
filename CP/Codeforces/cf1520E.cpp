#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int n;
ll ans;
string str;
void solve(int i,int till,int extra,int moves){
    if(i==n)
        ans=ans==-1?moves:ans<moves?ans:moves;
    else{
        int j,space=extra,sheeps=0;
        for(j=i;j<n&&str[j]!='*';j++,space+=1);
        for(j;j<n&&str[j]!='.';j++,sheeps+=1);
        solve(j,till+sheeps,space,moves+sheeps*space);
        solve(j,till+sheeps,0,moves+till*space);
    }
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int i;
        ans=-1;
        string s;
        cin>>n>>s;
        str=s;
        solve(0,0,0,0);
        cout<<ans<<endl;
    }
    return 0;
}