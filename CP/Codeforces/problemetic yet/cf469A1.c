#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,p,q,i,j,array[105],array1[105],count,total=0;
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
        printf("Oh,my keyboard!");
        exit(0);
    }
    else
    {
        count=p;
        for(i=0;i<q;i++)
        {
            for(j=0,total=0;j<p;j++)
            {
                if(array1[i]==array[j])
                {
                    total++;
                }
            }
            if(total==0)
            {
                count++;
            }
        }
    }
    if(count==n)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}
