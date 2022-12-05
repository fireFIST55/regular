#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ull>x(n),y(n);
        for(int i=0;i<n;i++)
            cin>>x[i]>>y[i];
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        if(n&1)
            cout<<1;
        else
            cout<<(x[n/2]-x[n/2-1]+1)*(y[n/2]-y[n/2-1]+1);
        cout<<"\n";
    }
}