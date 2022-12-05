#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,ans=0;
    cin>>n;
    vector<int>a(n),b(n),x(n+1);
    map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x[a[i]]=i;
    }
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++){
        int k=x[b[i]]-i;
        if(k<0)
            k+=n;
        freq[k]+=1;
        if(freq[k]>ans)
            ans=freq[k];
    }
    cout<<ans<<"\n";
    return 0;
}