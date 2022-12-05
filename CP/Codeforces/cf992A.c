#include<stdio.h>
int main(void)
{
    int i,j,a,n,count=0,freq[100000]={0},freq1[100000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>0)
        {
            freq[a-1]++;
            if(freq[a-1]==1)
                count++;
        }
        else if(a<0)
        {
            freq1[(-1)*a-1]++;
            if(freq1[(-1)*a-1]==1)
                count++;
        }
    }
    printf("%d\n",count);
}
