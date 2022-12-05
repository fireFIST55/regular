#include<stdio.h>
int main(void)
{
    int i,d=0,array[5],freq[100]={0},count=0,count1=0,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
        freq[array[i]-1]++;
    }
    for(i=0;i<5;i++)
    {
        if(freq[array[i]-1]>=3)
            count=array[i]*3;
        else if(freq[array[i]-1]==2&&d<array[i])
        {
            count1=array[i]*2;
            d=array[i];
        }
    }
    if(count>count1)
        sum-=count;
    else
        sum-=count1;
    printf("%d\n",sum);
    return 0;
}
