#include<stdio.h>
int main(void)
{
    int i,j,k,t,n;
    scanf("%d",&t);
    int digit[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        digit[i]=n;
    }
    for(i=0;i<t;i++)
    {
        for(j=0,k=0;j<digit[i]/2;j++)
        {
            if(digit[i]%2!=0&&!j)
                printf("%c",'7');
            else
                printf("%c",'1');
        }
        printf("\n");
    }
    return 0;
}
