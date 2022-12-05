#include<stdio.h>
int main(void)
{
    int i,a,n,d,b,sum=0,count=0;
    scanf("%d %d %d",&n,&b,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<=b)
        {
            sum+=a;
            if(sum>d)
            {
                count++;
                sum=0;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
