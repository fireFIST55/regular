#include<stdio.h>
int main(void)
{
    int array[100],array1[100],temp[100]={0},i,n,p,q,m,total;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&array[i]);
        m=array[i];
        temp[m]=m;
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&array1[i]);
        m=array1[i];
        temp[m]=m;
    }
    for(i=1;i<=n;i++)
    {
        if(temp[i]==i)
        {
            total=1;
        }
        else
        {
            total=0;
            break;
        }
    }
    if(total==0)
    {
        printf("Oh, my keyboard!");
    }
    else
    {
        printf("I become the guy.");
    }
    return 0;
}
