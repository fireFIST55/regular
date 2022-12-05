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
        ll x,j=1;
        int n,total=0;
        cin>>n>>x;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end(),greater<ll>());
        for(int i=0;i<n;i++){
            if(a[i]*j>=x){
                j=1;
                total+=1;
            }
            else
                j+=1;
        }
        cout<<total<<"\n";
    }
    return 0;
}