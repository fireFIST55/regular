#include<stdio.h>
int main(void)
{
    int i,j,n1,n2,k,m;
    scanf("%d %d",&n1,&n2);
    long int x,y,array[n1];
    scanf("%d %d",&k,&m);
    for(i=0;i<n1;i++)
        scanf("%ld",&array[i]);
    for(i=0;i<n2;i++)
    {
        scanf("%ld",&x);
        if(i==n2-m)
            y=x;
    }
    if(y>array[k-1])
        printf("YES\n");
    else
        printf("NO\n");
}
