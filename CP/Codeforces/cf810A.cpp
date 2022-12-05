#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,k,x,total=0;
    float avg;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        total+=x;
    }
    avg=total/(n/1.0);
    if((!(total%n)&&avg>=k)||(total%n&&(avg+.5>=k)))
        cout<<0<<"\n";
    else
    {
        for(i=1;;i++)
        {
            avg=(total+i*k)/((n+i)/1.0);
            if(avg+.5>=k)
                break;
        }
        cout<<i<<"\n";
    }
    return 0;
}
