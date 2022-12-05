#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,zero=0,one=0,sub1=0,sub0=0;
    cin>>n;
    string s;
    cin>>s;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            zero=0;
            while(i<n&&s[i]=='0'){
                zero+=1;
                if(zero>sub1){
                    sub0+=1;
                    ans[i]=sub0;
                }
                else{
                    ans[i]=zero;
                    sub0=max(sub0,zero);
                }
                i+=1;
            }
        }
        else{
            one=0;
            while(i<n&&s[i]=='1'){
                one+=1;
                if(one>sub0){
                    sub1+=1;
                    ans[i]=sub1;
                }
                else{
                    ans[i]=one;
                    sub1=max(sub1,one);
                }
                i+=1;
            }
        }
        i-=1;
    }
    cout<<max(sub0,sub1)<<'\n';
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<'\n';
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}