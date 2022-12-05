#include<stdio.h>
int main(void)
{
    long int x,a=0,b=1,n;
    int i,j=0;
    scanf("%ld",&n);
    if(!n)
        j=1;
    else
    {
        for(i=0;i<n;i++)
        {
            x=b;
            b+=a;
            if(b==n)
            {
                j=1;
                break;
            }
            else if(b>n)
                break;
            a=x;
        }
    }
    if(j)
        printf("%d %d %d\n",0,0,n);
    else
        printf("I'm too stupid to solve this problem\n");
    return 0;
}
