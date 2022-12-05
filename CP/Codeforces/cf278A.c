#include<stdio.h>
int main(void)
{
    int i,j,a,b,n,max,min,distance1=0,distance2=0;
    scanf("%d",&n);
    int distance[n];
    for(i=0;i<n;i++)
        scanf("%d",&distance[i]);
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    min=a+b-max;
    for(i=min-1;i<max-1;i++)
        distance1+=distance[i];
    for(i=max-1;i<n;i++)
        distance2+=distance[i];
    for(i=0;i<min-1;i++)
        distance2+=distance[i];
    min=distance1<distance2?distance1:distance2;
    printf("%d\n",min);
    return 0;
}
