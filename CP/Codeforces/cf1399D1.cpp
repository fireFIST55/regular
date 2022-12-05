#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int n,pos=1;
    cin>>n;
    string s;
    cin>>s;
    vector<int>ans(n);
    stack<int>one,zero;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(zero.empty())    ans[i]=pos++;
            else{
                ans[i]=ans[zero.top()];
                zero.pop();
            }
            one.push(i);
        }
        else{
            if(one.empty()) ans[i]=pos++;
            else{
                ans[i]=ans[one.top()];
                one.pop();
            }
            zero.push(i);
        }
    }
    cout<<pos-1<<endl;
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}