#include<stdio.h>
int main(void)
{
    long long int x,i;
    scanf("%lld",&x);
    for(i=1;i<1000000000;i++)
    {
        if(x>5||x==5)
        {
            x-=5;
            if(x==0)
            {
                printf("%lld",i);
                break;
            }
        }
        else if(x>4||x==4)
        {
            x-=4;
            if(x==0)
            {
                printf("%lld",i);
                break;
            }
        }
        else if(x>3||x==3)
        {
            x-=3;
            if(x==0)
            {
                printf("%lld",i);
                break;
            }
        }
        else if(x>2||x==2)
        {
            x-=2;
            if(x==0)
            {
                printf("%lld",i);
                break;
            }
        }
        else if(x>1||x==1)
        {
            x-=1;
            if(x==0)
            {
                printf("%lld",i);
                break;
            }
        }
    }
    return 0;
}
