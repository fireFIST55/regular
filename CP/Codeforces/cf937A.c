#include<stdio.h>
int main(void)
{
    int count=0,i,n,freq[601]={0};
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        freq[array[i]]++;
        if(freq[array[i]]==1&&array[i]>0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
