#include<stdio.h>
int main(void)
{
    int i,n,count=0,array[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==1)
        {
            printf("HARD");
            break;
        }
        else
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("EASY");
    }
    return 0;
}
