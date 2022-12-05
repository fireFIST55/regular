#include<stdio.h>
int main(void)
{
    int i,j,k,x,n;
    scanf("%d",&n);
    for(i=1,j=1,k=1;i<=n;i++)
    {
        if(i==k)
        {
            printf("O");
            x=k;
            k+=j;
            j=x;
        }
        else
            printf("o");
    }
    printf("\n");
    return 0;
}
