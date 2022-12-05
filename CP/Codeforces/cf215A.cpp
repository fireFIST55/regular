#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n1,n2,y,x=0,count;
    cin>>n1;
    int a[n1];
    for(i=0;i<n1;i++)
        cin>>a[i];
    cin>>n2;
    int b[n2];
    for(i=0;i<n2;i++)
        cin>>b[i];
    for(i=0,count=0;i<n1;i++)
    {
        for(j=n2-1;j>=0;j--)
        {
            if(b[j]<a[i])
                break;
            else if(!(b[j]%a[i]))
            {
                y=b[j]/a[i];
                if(y>x)
                {
                    x=y;
                    count=1;
                }
                else if(y==x)
                    count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}
