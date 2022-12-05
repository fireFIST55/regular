#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int prefix(string s){
    int k=0,ln=0,len=s.length();
    for(int j=len-1;j>=0;j--){
        if(k>j) break;
        else if(s[k]==s[j]){
            if(k!=j)    ln+=2;
            else ln+=1;
            k+=1;
        }
        else k=ln=0;
    }
    return ln;
}

int suffix(string s){
    int ln=0,len=s.length(),k=len-1;
    for(int i=0;i<len;i++){
        if(k<i) break;
        else if(s[k]==s[i]){
            if(i!=k)    ln+=2;
            else ln+=1;
            k-=1;
        }
        else k=len-1,ln=0;
    }
    return ln;
}

void solve(){
    string s,ans;
    cin>>s;
    int x=0,y=0;
    int len=s.length(),a=prefix(s),b=suffix(s),c=0;
    if(s[0]==s[len-1]){
        for(int i=0,j=len-1;i<=j;i++,j--){
            if(s[i]==s[j]){
                x=i;
                y=j;
            }
            else{
                string ab=s.substr(i,j-i+1);
                int p=prefix(ab),q=suffix(ab);
                p>q?x+=p:y-=q;
                break;
            }
        }
        c=x+1+len-y;
        c-=x==y?1:0;
    }
    bool pre=0,suf=0;
    pre=a>=b&&a>=c?1:0;
    suf=b>=a&&b>=c?1:0;
    if(pre) ans=s.substr(0,a);
    else if(suf)    ans=s.substr(len-b,b);
    else{
        string xx=s.substr(0,x+1),yy=s.substr(y,len-y);
        ans=xx+yy;
    }
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