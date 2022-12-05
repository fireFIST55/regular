#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int array[n][2],mishka=0,chris=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&array[i][0],&array[i][1]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i][0]>array[i][1])
        {
            mishka++;
        }
        else if(array[i][0]<array[i][1])
        {
            chris++;
        }
    }
    if(mishka>chris)
    {
        printf("Mishka");
    }
    else if(chris>mishka)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }
    return 0;
}
