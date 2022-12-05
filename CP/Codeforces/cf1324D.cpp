#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main(void){
    encoding_898;
    int n;
    cin>>n;
    ull count=0;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++){
        ll x=a[i],y=b[i];
        for(int j=i+1;j<n;j++){
            ll zx=a[j],zy=b[j];
            if(x+zx>zy+y)
                count+=1;
        }
    }
    cout<<count<<"\n";
    return 0;
}