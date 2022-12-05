#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
string a="abacaba";
int cntx(const string& s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s.substr(i,a.size())==a)
            count+=1;
    }
    return count;
}
void solve(){
    int n,cnt=0;
    string s;
    bool found=0;
    cin>>n>>s;
    for(int i=0;i+a.size()<=n;i++){
        string ss=s;
        bool go=1;
        for(int j=i,k=0;k<7;j++,k++){
            if(ss[j]!=a[k]&&ss[j]!='?'){
                go=0;
                break;
            }
            ss[j]=a[k];
        }
        if(go&&(cntx(ss)==1)){
            for(int j=0;j<n;j++){
                if(ss[j]=='?')  ss[j]='z';
            }
            found=1;
            cout<<"Yes\n"<<ss<<endl;
            break;
        }
    }
    if(!found)  cout<<"No\n";
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