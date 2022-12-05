#include<stdio.h>
int main(void)
{
    int k,r,count=0,i;
    scanf("%d %d",&k,&r);
    for(i=1;i<=15;i++)
    {
        if(k*i%10==0)
        {
            count++;
            break;
        }
        else if((k*i-r)%10==0)
        {
            count++;
            break;
        }
    }
    printf("%d",i);
    return 0;
}
