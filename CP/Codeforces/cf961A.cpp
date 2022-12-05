#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int i,n,m,x,min,freq[1000]={0};
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        freq[x-1]++;
    }
    for(i=0;i<n;i++)
    {
        if(!i||min>freq[i])
            min=freq[i];
        if(!min)
            break;
    }
    cout<<min;
    return 0;
}
