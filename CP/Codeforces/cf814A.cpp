#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,k,a;
    cin>>n>>k;
    int array[n],pos,increase=1;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        if(!array[i])
            pos=i;
        if(array[i]&&i&&array[i-1]>array[i])
            increase=0;
    }
    for(i=0;i<k;i++)
        cin>>a;
    if(k==1&&increase)
    {
        if(pos&&pos<n-1)
        {
            if(array[pos-1]<=a&&array[pos+1]>=a)
                cout<<"No"<<"\n";
            else
                cout<<"Yes"<<"\n";
        }
        else if(!pos)
        {
            if(array[pos+1]>=a)
                cout<<"No"<<"\n";
            else
                cout<<"Yes"<<"\n";
        }
        else if(pos==n-1)
        {
            if(a>=array[pos-1])
                cout<<"No"<<"\n";
            else
                cout<<"Yes"<<"\n";
        }
    }
    else
        cout<<"Yes"<<"\n";
    return 0;
}
