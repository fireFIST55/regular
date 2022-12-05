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
        ull count=0,freq[40]={0};
        cin>>n;
        vector<ull>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            double y=((log(a[i])/1.0)/(log(2)/1.0));
            int x=y;
            freq[x]+=1;
        }
        for(int i=0;i<n;i++){
            double y=((log(a[i])/1.0)/(log(2)/1.0));
            int x=y;
            freq[x]-=1;
            count+=freq[x];
        }
        cout<<count<<"\n";
    }
    return 0;
}