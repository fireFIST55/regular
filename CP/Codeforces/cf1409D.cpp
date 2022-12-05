#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
void solve(){
    string s;
    ull ans=0,a=0,b=0,x=1,y=10;
    int sum,tot_sum=0,dec,ind=-1;
    cin>>s>>sum;
    for(int i=s.length()-1;i>=0;i--){
        a+=(s[i]-48)*x;
        x*=y;
    }
    for(int i=0;i<s.length();i++){
        tot_sum+=(s[i]-48);
        if(tot_sum<sum)
            ind=i;
    }
    //cout<<"Index:\t"<<ind<<endl<<endl;
    //cout<<"Actual number:\t"<<a<<endl;
    if(tot_sum<=sum)
        ans=0;
    else if(sum>1&&ind!=-1){
        int carry=1;
        for(int i=ind+1;i<s.length();i++)
            s[i]='0';
        for(int i=ind;i>=0&&carry;i--)
            s[i]=s[i]=='9'?s[i]=='0':s[i]+1,carry=0;
        x=1;
        //cout<<"renovated:\t"<<s<<"\tCarry:\t"<<carry<<endl<<endl;
        for(int i=s.length()-1;i>=0;i--){
            ull m=(ull)((ull)s[i]-(ull)48);
            b+=m*x;
            x*=y;
            //cout<<b<<endl;
        }
        if(carry){
            s[0]='1';
            ull m=s[0]-48;
            b+=m*x;
        }
        //cout<<"B:\t"<<b<<endl<<endl;
        ans=b-a;
    }
    else{
        x=1;
        for(int i=0;i<s.length();i++)
            x*=y;
        //cout<<"B:\t"<<x<<endl<<endl;
        ans=x-a;
    }
    cout<<ans<<"\n";
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}