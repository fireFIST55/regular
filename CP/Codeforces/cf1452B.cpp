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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll total=0,x,y,ans,ans1,res;
        vector<ll>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            total+=vec[i];
        }
        sort(vec.begin(),vec.end(),greater<ll>());
        x=(n-1)*vec[1]-(total-vec[0]);
        if(x==vec[0]||n==2)
            ans=0;
        else if(x<vec[0]){
            if(!((vec[0]-x)%(n-1)))
                ans=0;
            else if(vec[0]-x<n-1)
                ans=(n-1)-(vec[0]-x);
            else
                ans=(n-1)-((vec[0]-x)%(n-1));
        }
        else
            ans=x-vec[0];
        y=(n-1)*vec[0]-(total-vec[n-1]);
        if(y==vec[n-1]||n==2)
            ans1=0;
        else if(y>vec[n-1])
            ans1=y-vec[n-1];
        else{
            if(!((vec[n-1]-y)%(n-1)))
                ans1=0;
            else if(vec[n-1]-y<n-1)
                ans1=(n-1)-(vec[n-1]-y);
            else
                ans1=(n-1)-((vec[n-1]-y)%(n-1));
        }
        res=max(ans,ans1);
        cout<<res<<"\n";
    }
    return 0;
}
