#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,ans=0,freq[3]={0};
    char string[102];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]!=string[i+1]&&string[i+1]!=string[i+2]&&string[i+2]!=string[i]&&string[i]>=65&&string[i]<=67&&string[i+1]>=65&&string[i+1]<=67&&string[i+2]>=65&&string[i+2]<=67)
        {
            ans=1;
            break;
        }
    }
    if(ans)
        cout<<"Yes";
    else
        cout<<"No";
    cout<<"\n";
    return 0;
}
