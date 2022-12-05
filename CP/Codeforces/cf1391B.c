#include<stdio.h>
int main(void)
{
    int i,j,k,t,r,d,n,m,count;
    scanf("%d",&t);
    char ch;
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        for(j=0,count=0;j<n;j++)
        {
            for(k=0,d=0;k<=m;k++)
            {
                scanf("%c",&ch);
                if(j==n-1)
                {
                    if(ch=='D')
                        count++;
                }
                else if(ch=='D')
                    d++;
                else if(k==m&&ch=='R')
                    count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
