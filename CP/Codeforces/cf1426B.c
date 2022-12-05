#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,t,n,m,a,b,c,d,yes;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        for(j=0,yes=0;j<n;j++)
        {
            cin>>a>>b>>c>>d;
            if(b==c)
                yes=1;
        }
        if((m*m%4)||((m*m/4)%(sqrt(m*m/4))))
            yes=0;
        if(yes)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
