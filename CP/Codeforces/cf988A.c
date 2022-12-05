#include<stdio.h>
int main(void)
{
    int i,j=0,k,n,count=0;
    scanf("%d %d",&n,&k);
    int array[n],answers[k];
    int freq[100]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        freq[array[i]-1]++;
        if(freq[array[i]-1]==1)
        {
            count++;
            answers[j]=i+1;
            j++;
        }
    }
    if(count>=k)
    {
        printf("YES\n");
        for(i=0;i<k;i++)
        {
            printf("%d ",answers[i]);
        }
        printf("\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
