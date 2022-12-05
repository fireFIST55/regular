#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,k,x,y,x1,y1;
    double distance=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(i)
            distance+=(sqrt((pow((x-x1),2))+pow((y-y1),2)))*(k/1.0);
        x1=x;
        y1=y;
    }
    cout<<distance/50.0000<<"\n";
    return 0;
}
