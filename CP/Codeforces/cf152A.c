#include<stdio.h>
int main(void)
{
    int i,j,k,x,max,n,m,pos[100]={0},total=0;
    scanf("%d %d",&n,&m);
    char string[n][m+2],answer[n+1];
    for(i=0;i<n;i++)
        scanf("%s",string[i]);
    for(i=0;i<m;i++)
    {
        int pos1[n];
        for(j=0,k=0,max=0;j<n;j++)
        {
            x=string[j][i]-48;
            if(max<x)
            {
                max=x;
                k=0;
                pos1[k]=j;
                k++;
            }
            else if(max==x)
            {
                pos1[k]=j;
                k++;
            }
        }
        if(k==n)
        {
            total=n;
            break;
        }
        else
        {
            for(j=0;j<k;j++)
            {
                if(!pos[pos1[j]])
                    total++;
                pos[pos1[j]]++;
            }
        }
    }
    printf("%d\n",total);
    return 0;
}
