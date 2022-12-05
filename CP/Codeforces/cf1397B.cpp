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
    int n;
    cin>>n;
    ll c=1,ans=(ll)1e15,bar=(ll)1e15;
    vector<ll>arr(n);
    for(auto &it:arr)   cin>>it;
    sort(arr.begin(),arr.end());
    while(1){
        ll pw=1,val=0;
        for(int i=0;i<n;i++,pw*=c){
            val+=abs(arr[i]-pw);
            if(pw>=bar){
                val=-1;
                break;
            }
        }
        if(val>=0)
            ans=min(ans,val);
        else
            break;
        c++;
    }
    cout<<ans<<endl;
}
int main(void){
    encoding_898;
    solve();
    return 0;
}