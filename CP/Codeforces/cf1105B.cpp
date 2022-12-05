#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n,ans=1;
    cin>>n;
    char string[n][n+1];
    for(i=0;i<n;i++)
        cin>>string[i];
    for(i=1;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j&&j<n-1&&string[i][j]=='.'&&string[i-1][j]=='.'&&string[i][j-1]=='.'&&string[i][j+1]=='.'&&string[i+1][j]=='.')
            {
                string[i][j]='#';
                string[i-1][j]='#';
                string[i][j-1]='#';
                string[i][j+1]='#';
                string[i+1][j]='#';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(string[i][j]=='.')
            {
                ans=0;
                break;
            }
        }
    }
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
