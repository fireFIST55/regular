#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
       vector<int> a(n+1);
       for(int i=1;i<=n;i++) cin>>a[i];
        sort(a.begin()+1,a.end());
        if(a[1]==a[n]){ cout<<n/2<<endl;continue;}
        int ans=0;
        for(int l=1,r=1;l<=n;l=r=r+1)
        {
            while(r+1<=n&&a[l]==a[r+1]) ++r;
            ans=max(ans,(n-r)*r); 
        }
        cout<<ans<<endl;
    }
}