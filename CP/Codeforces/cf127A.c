#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n,k,x,y,x1,y1;
    double distance=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        if(i)
            distance+=(sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)))*(k/1.0);
        x1=x;
        y1=y;
    }
    printf("%lf",distance/50.0);
    return 0;
}
