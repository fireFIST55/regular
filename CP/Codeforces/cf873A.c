#include<stdio.h>
int main(void)
{
    int i,j,a,n,k,x,time=0;
    scanf("%d %d %d",&n,&k,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(i>=n-k)
            time+=x;
        else
            time+=a;
    }
    printf("%d\n",time);
    return 0;
}
