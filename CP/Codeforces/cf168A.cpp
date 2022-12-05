#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,need,z;
    cin>>n>>x>>y;
    if(!((n*y)%100))
        z=(n*y)/100;
    else
        z=((n*y)/100)+1;
    if(z<=x)
        cout<<0;
    else
        cout<<z-x;
    cout<<"\n";
    return 0;
}
