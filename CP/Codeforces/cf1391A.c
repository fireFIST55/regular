#include<stdio.h>
int main(void)
{
    int i,j,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}
