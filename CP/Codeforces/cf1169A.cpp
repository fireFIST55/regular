#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    for(i=0;;i++,a++,b--)
    {
        if(a>n)
            a=1;
        if(!b)
            b=n;
        if(a==b)
        {
            k=1;
            break;
        }
        else if(a==x||b==y)
        {
            k=0;
            break;
        }
    }
    if(k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
