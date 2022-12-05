#include<stdio.h>
int main(void)
{
    int i,a,b,n,year=0;
    scanf("%d",&n);
    int years[n-1];
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&years[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=a-1;i<b-1;i++)
    {
        year+=years[i];
    }
    printf("%d\n",year);
    return 0;
}
