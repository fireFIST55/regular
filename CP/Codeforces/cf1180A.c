#include<stdio.h>
int main(void)
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0,j=1;i<n-1;i++,j+=2)
    {
        sum+=j;
    }
    printf("%d\n",sum*2+j);
    return 0;
}
