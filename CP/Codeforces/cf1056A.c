#include<stdio.h>
int main(void)
{
    int max=0,n,r,a,freq[100]={0};
    scanf("%d",&n);
    int i,j,freq1[100][100]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&r);
        for(j=0;j<r;j++)
        {
            scanf("%d",&a);
            freq1[i][a-1]++;
            if(freq1[i][a-1]==1)
                freq[a-1]++;
            if(max<a)
                max=a;
        }
    }
    for(i=0;i<max;i++)
    {
        if(freq[i]==n)
            printf("%d ",i+1);
    }
    printf("\n");
    return 0;
}
