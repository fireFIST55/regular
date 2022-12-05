#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int a,n,m,x;
    cin>>n>>m>>x;
    cout<<"YES\n";
    set<pair<int,int>>st;
    for(int i=0;i<m;i++)
        st.insert({0,i+1});
    for(int i=0;i<n;i++){
        cin>>a;
        pair<int,int>pii=*st.begin();
        st.erase(pii);
        cout<<pii.second<<' ';
        st.insert({pii.first+a,pii.second});
    }
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