#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,n,m,a;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int count=0;
        vector<int>freq(100);
        for(int i=0;i<n;i++){
            cin>>a;
            freq[a-1]++;
        }
        for(int i=0;i<m;i++){
            cin>>a;
            if(freq[a-1])
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}