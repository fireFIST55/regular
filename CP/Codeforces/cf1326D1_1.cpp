#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int kmp(string s){
    int n=s.length(),failure[n];
    failure[0]=0;

    for(int i=1;i<n;i++){
        int j=failure[i-1];
        
        while(j>0&&s[i]!=s[j])
            j=failure[j-1];
        if(s[i]==s[j])  j+=1;
        failure[i]=j;
    }
    return failure[n-1];
}

int largest_prefix_pal(string s){
    string t=s+'?';
    reverse(s.begin(),s.end());
    t+=s;
    return kmp(t);
}

void solve(){
    string s,rem,ans;
    cin>>s;
    int n=s.length(),len=0;

    for(int i=0,j=n-1;i<j;i++,j--){
        if(s[i]!=s[j])  break;
        else len+=1;
    }
    rem=s.substr(len,n-2*len);
    ans=s.substr(0,len);

    if(rem.size()){
        int y,x=largest_prefix_pal(rem);
        reverse(rem.begin(),rem.end());
        y=largest_prefix_pal(rem);
        if(x>y)
            ans+=s.substr(len,x);
        else    ans+=s.substr(n-len-y,y);
    }
    ans+=s.substr(n-len,len);
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