#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int comb(string s,int x,int y){
    int cnt=0;
    for(auto c:s){
        if(c-'0'==x){
            cnt+=1;
            swap(x,y);
        }
    }
    if(x!=y&&cnt&1) cnt-=1;
    return cnt;
}
void solve(){
    string s;
    int ans=0;
    cin>>s;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            ans=max(ans,comb(s,i,j));
    }
    cout<<s.length()-ans<<endl;
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