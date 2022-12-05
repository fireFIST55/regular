#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    int n,mx=-1;
    cin>>n;
    set<int>st;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mx=max(mx,vec[i]);
        if(i)
            st.insert(vec[i]-vec[i-1]);
    }
    if(n<=2||st.size()==1)    cout<<0<<endl;
    else if(st.size()>2)    cout<<-1<<endl;
    else{
        int a=*st.begin(),b;
        st.erase(st.begin());
        b=*st.begin();
        if((a<=0&&b<=0)||(a>=0&&b>=0))  cout<<-1<<endl;
        else{
            if(a<b) swap(a,b);
            if(mx>(a-b))  cout<<-1<<endl;
            else cout<<a-b<<" "<<a<<endl;
        }
    }
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}