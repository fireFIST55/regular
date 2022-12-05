#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),c(n),b;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>c[i];
            if(!c[i])
                b.push_back(a[i]);
        }
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0,k=0;i<n;i++){
            if(!c[i]){
                cout<<b[k]<<" ";
                k+=1;
            }
            else
                cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}