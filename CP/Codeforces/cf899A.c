#include<stdio.h>
int main(void)
{
    int i,a,n,min,one=0,two=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
            one++;
        else
            two++;
    }
    min=one<two?one:two;
    if(one-min>=0)
        printf("%d\n",min+(one-min)/3);
    else
        printf("%d\n",min);
    return 0;
}
