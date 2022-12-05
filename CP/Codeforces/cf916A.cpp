#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,x,h,m,a1,a2,b1,b2;
    cin>>x>>h>>m;
    for(i=0;;i++)
    {
        if(!(h/10))
        {
            a1=h;
            a2=0;
        }
        else
        {
            a1=h-(h/10)*10;
            a2=h/10;
        }
        if(!(m/10))
        {
            b2=m;
            b1=0;
        }
        else
        {
            b1=m-(m/10)*10;
            b2=m/10;
        }
        if(a1==7||b1==7|a2==7||b2==7)
            break;
        m-=x;
        if(m<0)
        {
            m=60+m;
            h-=1;
            if(h<0)
                h=23;
        }
    }
    cout<<i<<"\n";
    return 0;
}
