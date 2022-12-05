#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,x=0,y=0,z=0,z1,coins=0;
    cin>>n;
    char ch,ch1;
    for(i=0;i<n;i++)
    {
        cin>>ch;
        if(ch=='R')
            x+=1;
        else
            y+=1;
        if(x>y)
            z=x;
        else if(y>x)
            z=y;
        if(!i)
        {
            z1=z;
            ch1=ch;
        }
        else if(z1<z)
        {
            z1=z;
            if(ch!=ch1)
            {
                coins++;
                ch1=ch;
            }
        }
    }
    cout<<coins<<"\n";
    return 0;
}
