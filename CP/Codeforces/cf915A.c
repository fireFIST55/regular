#include<stdio.h>
int main(void)
{
    int i,n,a,k,hours=1000;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(!(k%a)&&k/a<hours)
            hours=k/a;
    }
    printf("%d\n",hours);
    return 0;
}
