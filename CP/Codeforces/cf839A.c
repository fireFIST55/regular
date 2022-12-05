#include<stdio.h>
int main(void)
{
    int i,j=0,n,k,a,left=0,given=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        a+=left;
        if(a<=8)
        {
            given+=a;
            left=0;
        }
        else if(a>8)
        {
            given+=8;
            left=a-8;
        }
        if(given>=k&&!j)
            j=i+1;
    }
    if(!j)
        printf("%d\n",-1);
    else
        printf("%d\n",j);
    return 0;
}
