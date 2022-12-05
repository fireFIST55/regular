#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=0,y=0,k=0,l=0,ini=0,length=s.length(),one,zero,total0=0,total1=0;
        for(int i=0;i<length;){
            if(s[i]=='1'){
                one=1;
                i+=1;
                ini+=1;
                while(i<length&&s[i]=='1'){
                    one+=1;
                    i+=1;
                }
                if(!x){
                    k=1;
                    x=one;
                }
                total1+=one;
                l=1;
            }
            else{
                zero=1;
                i+=1;
                ini+=1;
                while(i<length&&s[i]=='0'){
                    zero+=1;
                    i+=1;
                }
                if(!x){
                    k=2;
                    x=zero;
                }
                total0+=zero;
                l=2;
            }
        }
        if(ini<=2)
            cout<<0;
        else{
            int a=(l==2)?(total0-zero):total0,b=(l==1)?(total1-one):total1,c=(k==1)?(total1-x):(total1),d=(k==2)?(total0-x):total0,ans=min(min(a,min(b,c)),d);
            cout<<ans;
        }
        cout<<"\n";
    }
    return 0;
}