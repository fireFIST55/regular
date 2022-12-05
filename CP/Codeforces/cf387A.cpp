#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s[6],t[6];
    int i,hour,hour1,min,min1,extra=0;
    cin>>s>>t;
    hour=(s[0]-48)*10+s[1]-48;
    hour1=(t[0]-48)*10+t[1]-48;
    min=(s[3]-48)*10+s[4]-48;
    min1=(t[3]-48)*10+t[4]-48;
    if(min>=min1)
        min=min-min1;
    else
    {
        min=60+(min-min1);
        extra=1;
    }
    if(hour>=hour1+extra)
        hour=hour-hour1-extra;
    else
        hour=24+(hour-hour1-extra);
    if(!(hour/10))
        cout<<0<<hour<<":";
    else
        cout<<hour<<":";
    if(!(min/10))
        cout<<0<<min;
    else
        cout<<min;
    cout<<"\n";
    return 0;
}
