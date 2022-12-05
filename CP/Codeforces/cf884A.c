#include<stdio.h>
int main(void)
{
    int i,n,a,t,x=0,have,days=0;
    scanf("%d %d",&n,&t);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        have=86400-a;
        if(have<t&&x==0)
        {
            days++;
            t-=have;
        }
        else if(have>=t&&x==0)
        {
            days++;
            x++;
        }
    }
    printf("%d\n",days);
    return 0;
}
