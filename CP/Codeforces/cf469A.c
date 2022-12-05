#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,p,q,i,k,count,j,array[105]={0},array1[105]={0},temp[105]={0};
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&array1[i]);
    }
    if(p+q<n)
    {
        printf("Oh, my keyboard!");
        exit(0);
    }
    for(i=0;i<p;i++)
    {
        k=array[i];
        temp[k-1]=k;
    }
    for(i=0;i<q;i++)
    {
        for(j=0,count=0;j<p;j++)
        {
            if(array[j]==array1[i])
            {
                count++;
            }
            if(count==0)
            {
                k=array1[i];
                temp[k-1]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(temp[i]!=(i+1))
        {
            printf("Oh, my keyboard!");
            exit(0);
        }
    }
    printf("I become the guy.");
    return 0;
}
