#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,x,ans=1,a[2]={1,2};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(ans)
        {
            if(x==a[0])
                a[1]=(1+2+3)-(a[0]+a[1]);
            else if(x==a[1])
                a[0]=(1+2+3)-(a[0]+a[1]);
            else
                ans=0;
        }
    }
    if(ans)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<"\n";
    return 0;
}
