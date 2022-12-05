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
        ll count=0;
        cin>>n;
        vector<ll>a(n);
        vector<bool>x(n,true);
        for(int i=0;i<n;i+=1)
            cin>>a[i];
        for(int i=29;i>=0;i--){
            ll m=0;
            for(int j=0;j<n;j++){
                if(((1<<i)&a[j])&&x[j]){
                    m+=1;
                    x[j]=false;
                }
            }
            count+=((m*(m-1))/2);
        }
        cout<<count<<"\n";
    }
    return 0;
}