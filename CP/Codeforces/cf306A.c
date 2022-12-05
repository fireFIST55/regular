#include<stdio.h>
int main(void)
{
    int i,remain,n,m,avg;
    scanf("%d %d",&n,&m);
    avg=n/m;
    remain=n-avg*m;
    for(i=0;i<m;i++)
    {
        if(i<remain)
            printf("%d ",avg+1);
        else
            printf("%d ",avg);
    }
    return 0;
}
