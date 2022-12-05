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
        int n,q,x=0;
        ull ans=0;
        cin>>n>>q;
        vector<ull>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){
                i+=1;
                while(i<n&&a[i]>a[i-1])
                    i+=1;
                i-=1;
                ans+=a[i];
                x=1;
            }
            else if(!x&&a[i-1]>a[i]){
                ans+=a[i-1];
                x=1;
                i-=1;
            }
            else if(x&&a[i]<a[i-1]){
                i+=1;
                while(i<n&&a[i]<a[i-1])
                    i+=1;
                if(i<n){
                    i-=1;
                    ans-=a[i];
                }
            }
        }
        if(n==1)
            ans=a[0];
        cout<<ans<<"\n";
    }
    return 0;
}