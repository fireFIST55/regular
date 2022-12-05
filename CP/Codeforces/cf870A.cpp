#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,m,a,x,y,z=-1,freq[10]={0};
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        freq[a-1]++;
        if(!i||x>a)
            x=a;
    }
    for(i=0;i<m;i++)
    {
        cin>>a;
        freq[a-1]++;
        if(freq[a-1]>1)
        {
            if(z==-1||z>a)
                z=a;
        }
        if(!i||y>a)
            y=a;
    }
    if(z!=-1)
        cout<<z;
    else
    {
        if(x<y)
            cout<<x<<y;
        else
            cout<<y<<x;
    }
    cout<<"\n";
    return 0;
}
