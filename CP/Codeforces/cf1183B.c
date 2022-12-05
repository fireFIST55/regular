#include<stdio.h>
int main(void)
{
    int i,j,n,q;
    scanf("%d",&q);
    long int a,k,min,max;
    for(i=0;i<q;i++)
    {
        scanf("%d %ld",&n,&k);
        for(j=0,max=-1;j<n;j++)
        {
            scanf("%ld",&a);
            if(!j)
                min=a;
            else
                min=min>a?a:min;
            max=max<a?a:max;
        }
        if(max-min>2*k)
            printf("%ld\n",-1);
        else
        {
            if(min==max)
                printf("%ld\n",min+k);
            else if(min+k==max)
                printf("%ld\n",max);
            else if(min+k<max)
                printf("%ld\n",min+k);
            else if(min+k>max)
                printf("%ld\n",min+k);
        }
    }
    return 0;
}
