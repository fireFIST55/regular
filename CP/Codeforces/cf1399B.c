#include<stdio.h>
int main(void)
{
    int i,j,n,t;
    scanf("%d",&t);
    long long int a[50],b[50],min_a,min_b,dif1,dif2,total,answer[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
            if(!j)
                min_a=a[j];
            else if(min_a>a[j])
                min_a=a[j];
        }
        for(j=0;j<n;j++)
        {
            scanf("%lld",&b[j]);
            if(!j)
                min_b=b[j];
            else if(min_b>b[j])
                min_b=b[j];
        }
        for(j=0,total=0;j<n;j++)
        {
            dif1=a[j]-min_a;
            dif2=b[j]-min_b;
            total+=dif1>dif2?dif1:dif2;
        }
        answer[i]=total;
    }
    for(i=0;i<t;i++)
        printf("%lld\n",answer[i]);
    return 0;
}
