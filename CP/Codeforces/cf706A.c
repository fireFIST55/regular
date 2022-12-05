#include<stdio.h>
#include<math.h>
int main(void)
{
    float min,dif,length;
    int i,n,min1,other,a,b,x,y,v;
    scanf("%d %d",&a,&b);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&v);
        length=(x-a)*(x-a)+(y-b)*(y-b);
        dif=sqrt(length);
        if(!i)
            min=dif/v;
        else
            min=min<(dif/v)?min:(dif/v);
    }
    printf("%f\n",min);
    return 0;
}
