#include<stdio.h>
int main(void)
{
    int n,k,i,total=0,team=0;
    scanf("%d %d",&n,&k);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]+k<=5)
        {
            total++;
        }
        if(total==3)
        {
            team++;
            total=0;
        }
    }
    printf("%d",team);
    return 0;
}
