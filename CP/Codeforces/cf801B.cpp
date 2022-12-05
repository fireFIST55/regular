#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char x[103],y[103],z[103];
    int i,ans=1;
    cin>>x;
    cin>>y;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=y[i])
            z[i]=y[i];
        else
        {
            ans=0;
            break;
        }
    }
    if(ans)
    {
        z[i]='\0';
        cout<<z;
    }
    else
        cout<<-1;
    cout<<"\n";
    return 0;
}
