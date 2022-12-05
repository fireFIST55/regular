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
        int n,k,y=0;
        ll total=0;
        cin>>n>>k;
        vector<ll>a(n);
        vector<int>w(k);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<k;i++)
            cin>>w[i];
        sort(a.begin(),a.end(),greater<ll>());
        sort(w.begin(),w.end());
        for(int i=0;i<k;i++){
            if(w[i]==1)
                total+=(a[i]*2);
            else
                total+=(a[i]+a[y+(k-2)+w[i]]);
            y+=(w[i]-1);
        }
        cout<<total<<"\n";
    }
    return 0;
}