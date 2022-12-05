#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n,x=-1000007,a,p;
    double p1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(x<a)
        {
            p1=sqrt(a);
            p=p1;
            if(p!=p1||a==2||a==3)
                x=a;
        }
    }
    printf("%d\n",x);
    return 0;
}
