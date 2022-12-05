#include<stdio.h>
int main(void)
{
    int i,k=0,n,count=0;
    scanf("%d",&n);
    int array[n],freq[1000]={0},answers[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        freq[array[i]-1]++;
        if(freq[array[i]-1]==1)
        {
            answers[k]=array[i];
            k++;
            count++;
        }
    }
    printf("%d\n",count);
    for(i=k-1;i>=0;i--)
    {
        printf("%d ",answers[i]);
    }
    printf("\n");
    return 0;
}
