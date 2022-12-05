#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,at=1,meal=1,total=0,a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    for(i=0;meal<n;i++)
    {
        if(at==1)
        {
            if(a<b)
            {
                total+=a;
                at=2;
            }
            else
            {
                total+=b;
                at=3;
            }
        }
        else if(at==2)
        {
            if(a<c)
            {
                total+=a;
                at=1;
            }
            else
            {
                total+=c;
                at=3;
            }
        }
        else
        {
            if(b<c)
            {
                total+=b;
                at=1;
            }
            else
            {
                total+=c;
                at=2;
            }
        }
        meal++;
    }
    cout<<total<<"\n";
    return 0;
}
