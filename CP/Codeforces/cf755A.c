#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    if(n%2!=0)
        printf("%d\n",3);
    else
    {
        for(i=1;i<1000;i++)
        {
            if((n*i+1)%2==0||(n*i+1)%3==0&&(n*i+1)!=3||(n*i+1)%5==0&&(n*i+1)!=5||(n*i+1)%7==0&&(n*i+1)!=7)
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}
