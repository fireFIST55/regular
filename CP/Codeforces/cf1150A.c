#include<stdio.h>
int main(void)
{
    int i,n,m,r,a,min,max=0,total,total1,shares;
    scanf("%d %d %d",&n,&m,&r);
    total=r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(i==0)
            min=a;
        else
        {
            if(min>a)
                min=a;
        }
    }
    shares=r/min;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
    }
    if(max>min)
        printf("%d\n",max*shares+r%min);
    else
        printf("%d\n",r);
    return 0;
}
