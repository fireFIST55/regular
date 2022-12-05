#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,ans=1,one=0,zero=0,ques=0;
    cin>>n>>k;
    string bits;
    cin>>bits;
    for(int i=0;i<n&&ans;i++){
        if(i<k)
            bits[i]=='1'?one+=1:bits[i]=='0'?zero+=1:ques+=1;
        else{
            if(bits[i]!='?'&&bits[i%k]!='?'&&bits[i]!=bits[i%k])
                ans=0;
            else if(bits[i%k]=='?'&&bits[i]!=bits[i%k]){
                bits[i%k]=bits[i];
                ques-=1;
                bits[i]=='0'?zero+=1:one+=1;
            }
        }
    }
    ques?ques<abs(one-zero)?ans=0:ans:one!=zero?ans=0:ans;
    ans?cout<<"YES\n":cout<<"NO\n";
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}