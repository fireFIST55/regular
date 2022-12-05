#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
string s;
int fun(int l,int r,char ch){
    if(l==r)    return s[l]!=ch;
    int cnt1=0;
    for(int i=l;i<=(l+r)/2;i++) if(s[i]!=ch)    cnt1+=1;
    int X=fun(((l+r)/2)+1,r,ch+1);
    int cnt2=0;
    for(int i=(l+r)/2+1;i<=r;i++) if(s[i]!=ch)    cnt2+=1;
    int Y=fun(l,(l+r)/2,ch+1);
    return min(cnt1+X,cnt2+Y);
}
void solve(){
    int n;
    cin>>n>>s;
    int ans=fun(0,n-1,'a');
    cout<<ans<<endl;
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