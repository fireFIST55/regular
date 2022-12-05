#include<stdio.h>
int main(void)
{
    int i,j,n,wise,total=0;
    scanf("%d",&n);
    char cake[n][n+1];
    for(i=0;i<n;i++)
    {
        scanf("%s",cake[i]);
        for(j=0,wise=0;cake[i][j]!='\0';j++)
        {
            if(cake[i][j]=='C')
                wise++;
        }
        if(wise>1)
            total+=((wise-1)*wise)/2;
    }
    for(i=0;i<n;i++)
    {
        for(j=0,wise=0;j<n;j++)
        {
            if(cake[j][i]=='C')
                wise++;
        }
        if(wise>1)
            total+=((wise-1)*wise)/2;
    }
    printf("%d\n",total);
    return 0;
}
