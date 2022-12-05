#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,count=2;
    long long int d,x,y;
    cin>>n>>d;
    long long int cities[n];
    for(i=0;i<n;i++)
        cin>>cities[i];
    if(n>1)
    {
        for(i=0;i<n;i++)
        {
            x=cities[i]+d;
            y=cities[i]-d;
            if(!i&&(cities[i+1]-x>=d||x-cities[i+1]>=d)&&cities[i+1]-cities[i]!=d*2)
                count++;
            else if(i)
            {
                if(y-cities[i-1]>=d||(cities[i-1]-y>=d))
                    count++;
                if(i!=n-1)
                {
                    if((cities[i+1]-x>=d||x-cities[i+1]>=d)&&cities[i+1]-cities[i]!=d*2)
                        count++;
                }
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}
