#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n0,n1,n2,x,i=0;
        char ans[10000];
        cin>>n0>>n1>>n2;
        bool flag=false;
        x=n1;
        while(n0||x||n2){
            if(n0){
                if(i&&ans[i-1]=='0'){
                    ans[i]='0';
                    i+=1;
                }
                else{
                    ans[i]='0';
                    ans[i+1]='0';
                    i+=2;
                }
                n0-=1;
            }
            else{
                if(x){
                    if(i-1>=0){
                        if(ans[i-1]=='1'){
                            if(x>1){
                                ans[i]='0';
                                i+=1;
                            }
                            else    flag=true;
                        }
                        else{
                            ans[i]='1';
                            i+=1;
                        }
                    }
                    else{
                        ans[i]='0';
                        ans[i+1]='1';
                        i+=2;
                    }
                    x-=1;
                }
                else{
                    if(i-1>=0){
                        ans[i]='1';
                        i+=1;
                    }
                    else{
                        ans[i]='1';
                        ans[i+1]='1';
                        i+=2;
                    }
                    n2-=1;
                }
            }
        }
        if(flag){
            ans[i]='0';
            i+=1;
        }
        ans[i]='\0';
        cout<<ans<<endl;
    }
}