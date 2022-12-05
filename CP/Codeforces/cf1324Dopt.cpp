#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    encoding_898;
    int n;
    cin>>n;
    ll ans=0;
    vector<int>a(n),b(n),c(n);
    for(auto &it: a) cin>>it;
    for(int i=0;i<n;i++){
        cin>>b[i];
        c[i]=a[i]-b[i];
    }
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++){
        if(c[i]<=0)
            continue;
        int pos=lower_bound(c.begin(),c.end(),-c[i]+1)-c.begin();
        ans+=i-pos;
    }
    cout<<ans<<"\n";
    return 0;
}