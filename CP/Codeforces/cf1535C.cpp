#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main(void){
    encoding_898;
    int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       int n=s.length();
       ll p=0,c1=0,c2=0,ans=0,i;
       for(i=0;i<n;i++)
       {
           if(s[i]-'0'==p || s[i]=='?')
            c1++;
           else
            c1=0;
 
           if(s[i]-'0'==1-p || s[i]=='?')
            c2++;
           else
            c2=0;
 
           ans+=max(c1,c2);
           p=1-p;
       }
 
       cout<<ans<<endl;
   }
}