#include<stdio.h>
int main(void)
{
    int array[100][2],(*pointer)[2]=array,n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",*(pointer+i)+j);
        }
    }
    for(i=0;i<n;i++)
    {
        if((*(*(pointer+i)+1)-*(*(pointer+i)))>=2)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
