#include<stdio.h>
int main(void)
{
    int sum=0,sum1=0,i,j,n,array[4],pos=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0,sum1=0;j<4;j++)
        {
            scanf("%d",&array[j]);
            if(i==0)
            {
                sum+=array[j];
            }
            else if(i>0)
            {
                sum1+=array[j];
            }
        }
        if(sum<sum1)
        {
            pos++;
        }
    }
    printf("%d\n",pos);
    return 0;
}
