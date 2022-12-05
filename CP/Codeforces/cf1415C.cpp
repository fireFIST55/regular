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
        int n,p,k,x,y,ans=INT_MAX;
        cin>>n>>p>>k;
        string a;
        int c[n];
        cin>>a;
        cin>>x>>y;
        for(int i=n-1;i>=p-1;i--){
            if(i+k<n)
                c[i]=c[i+k]+1-((a[i]=='1')?1:0);
            else
                c[i]=1-((a[i]=='1')?1:0);
        }
        for(int i=p-1;i<n;i++)
            ans=min(ans,c[i]*x+(i-p+1)*y);
        cout<<ans<<"\n";
    }
    return 0;
}