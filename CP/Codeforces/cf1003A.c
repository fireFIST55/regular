#include<stdio.h>
int main(void)
{
    int i,max=0,n;
    scanf("%d",&n);
    int array[n],freq[100]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        freq[array[i]-1]++;
        if(max<freq[array[i]-1])
        {
            max=freq[array[i]-1];
        }
    }
    printf("%d\n",max);
    return 0;
}

