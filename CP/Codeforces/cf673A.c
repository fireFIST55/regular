#include<stdio.h>
int main(void)
{
    int i,a,x=0,time=15,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<=time&&x==0)
            time=a+15;
        else
            x++;
    }
    if(time>90)
        time=90;
    printf("%d\n",time);
    return 0;
}
