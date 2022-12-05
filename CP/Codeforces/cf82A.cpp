#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,c,l,v,upto,a,total=0,x;
    cin>>c>>v>>upto>>a>>l;
    for(i=0,x=v;;i++)
    {
        if(i)
        {
            x+=a;
            if(x<upto)
                total+=x-l;
            else
                total+=upto-l;
        }
        else
            total+=v;
        if(total>=c)
            break;
    }
    cout<<i+1<<"\n";
    return 0;
}
