#include<stdio.h>
int main(void)
{
    int i,a,n,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(max<a)
            max=a;
    }
    if(max<=25)
        printf("%d\n",0);
    else
        printf("%d\n",max-25);
    return 0;
}
