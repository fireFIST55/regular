#include<stdio.h>
int main(void)
{
    int i,n,freq[200000]={0};
    scanf("%d",&n);
    int max=0,count=0,array[n*2];
    for(i=0;i<n*2;i++)
    {
        scanf("%d",&array[i]);
        freq[array[i]-1]++;
        if(freq[array[i]-1]==1)
            count++;
        else
        {
            if(max<count)
                max=count;
            count--;
        }
    }
    printf("%d\n",max);
    return 0;
}
