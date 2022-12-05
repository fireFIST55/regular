#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,k,n,m,faces=0;
    cin>>n>>m;
    char ch[5],ab[5]="acef",string[n][m+1];
    for(i=0;i<n;i++)
        cin>>string[i];
    if(n>1&&m>1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i+1<n&&j+1<m)
                {
                    ch[0]=string[i][j];
                    ch[1]=string[i][j+1];
                    ch[2]=string[i+1][j];
                    ch[3]=string[i+1][j+1];
                    sort(ch,ch+4);
                    ch[4]='\0';
                    if(!strcmp(ab,ch))
                        k=1;
                    else
                        k=0;
                    if(k)
                        faces++;
                }
            }
        }
    }
    cout<<faces<<"\n";
    return 0;
}
