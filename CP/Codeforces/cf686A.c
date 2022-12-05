#include<stdio.h>
int main(void)
{
    int i,n;
    long long int x,num,distressed=0;
    scanf("%d %lld",&n,&x);
    char string[3];
    for(i=0;i<n;i++)
    {
        scanf("%s",string);
        scanf("%lld",&num);
        if(string[0]=='+')
        {
            x+=num;
        }
        else
        {
            if(x>=num)
            {
                x-=num;
            }
            else
            {
                distressed++;
            }
        }
    }
    printf("%lld %lld\n",x,distressed);
    return 0;
}
