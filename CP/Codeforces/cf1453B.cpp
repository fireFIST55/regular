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
    int t;
    cin>>t;
    while(t--){
        int n;
        ll total=0,ans=0;
        cin>>n;
        vector<ll>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(i)
                total+=abs(vec[i]-vec[i-1]);
        }
        ans=max(abs(vec[0]-vec[1]),abs(vec[n-1]-vec[n-2]));
        for(int i=1;i<n-1;i++)
            ans=max(ans,(abs(vec[i]-vec[i-1])+abs(vec[i+1]-vec[i])-abs(vec[i+1]-vec[i-1])));
        cout<<total-ans<<"\n";
        vec.clear();
    }
    return 0;
}