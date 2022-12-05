#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int n,k,x,ans=0,l=0;
    cin>>n>>k;
    string str;
    cin>>str;
    x=k&1?(k/2)+1:k/2;
    for(int i=0,j=k-1;i<=j;i++,j--){
        int p=i,q=j,cnt=0,x=0;
        vector<int>freq(26),st;
        while(q<n){
            if(!freq[str[p]-97])
                st.push_back(str[p]-97);
            if(!freq[str[q]-97])
                st.push_back(str[q]-97);
            freq[str[p]-97]+=1;
            freq[str[q]-97]+=1;
            p+=k;
            q+=k;
            cnt+=2;
        }
        for(int j=0;j<st.size();j++)
            x=max(freq[st[j]],x);
        i==j?ans+=(cnt-x)/2:ans+=(cnt-x);
    }
    cout<<ans<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}