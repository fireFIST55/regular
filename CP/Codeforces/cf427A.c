#include<stdio.h>
int find(int array[],int i,int t,int total);
int main(void)
{
    int t=0,i,p,n,got,temp,total=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==-1)
        {
            total=find(array,i,t,total);
            total++;
            t=i;
        }
    }
    if(total>0)
    {
        printf("%d",total);
    }
    else
    {
        printf("0");
    }
    return 0;
}
int find(int array[],int i,int t,int total)
{
    int n,m;
    printf("I:%d\nT:%d\n",i,t);
    for(n=t;n<i;n++)
    {
        if(array[n]>0)
        {
            printf("Element:%d\n",array[n]);
            total-=array[n];
        }
        printf("AFTER:total%d\n",total);
    }
    return total;
}
