#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,k=1,pos=-1;
    cin>>n;
    char string[n+1];
    cin>>string;
    for(i=0;i<n;i++)
    {
        if(string[i]=='0')
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
        cout<<n;
    else
        cout<<pos+1;
    cout<<"\n";
    return 0;
}
