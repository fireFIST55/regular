#include<stdio.h>
int main(void)
{
    int i,n,m;
    scanf("%d %d",&n,&m);
    float a,b,min,sub[n];
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&a,&b);
        sub[i]=(a/b)*m;
    }
    min=sub[0];
    for(i=1;i<n;i++)
    {
        min=min<sub[i]?min:sub[i];
    }
    printf("%f",min);
    return 0;
}
