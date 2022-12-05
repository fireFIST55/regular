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
    char ans[5]="2020";
    cin>>t;
    while(t--){
        int n,ans1=0;
        cin>>n;
        char str[n+5];
        cin>>str;
        for(int i=0;str[i];i++){
            if(str[i]=='2'&&((i&&i+4==strlen(str))||!i)){
                int k=1,l=i+1;
                while(k<4&&l<strlen(str)&&str[l]==ans[k]){
                    k++;
                    l++;
                }
                if(k==4){
                    ans1=1;
                    break;
                }
                else if(!i){
                    int x=k,y=0;
                    for(int l=strlen(str)-1,k=3;k>=0&&l>=0;l--,k--){
                        if(str[l]==ans[k])
                            y++;
                        else
                            break;
                    }
                    if(x+y>=4)
                        ans1=1;
                }
                if(ans1)
                    break;
            }
        }
        if(ans1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}