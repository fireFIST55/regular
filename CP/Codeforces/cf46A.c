#include<stdio.h>
int main(void)
{
    int i,j,num=1,n;
    scanf("%d",&n);
    for(i=0,j=1;i<n-1;i++,j++)
    {
        if(num+j>n)
            num=(num+j)-n;
        else
            num+=j;
        printf("%d ",num);
    }
    printf("\n");
    return 0;
}
