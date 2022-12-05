#include<stdio.h>
int main(void)
{
    int i,j,n,m,count=0;
    scanf("%d %d",&n,&m);
    int games[n],bills[m];
    for(i=0;i<n;i++)
        scanf("%d",&games[i]);
    for(i=0,j=0;i<m;i++)
    {
        scanf("%d",&bills[i]);
        if(i<n&&bills[j]>=games[i])
        {
            count++;
            j++;
        }
    }
    if(i<n&&j<m)
    {
        for(;j<m&&i<n;i++)
        {
            if(bills[j]>=games[i])
            {
                count++;
                j++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
