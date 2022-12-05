#include<stdio.h>
int main(void)
{
    int i,n,a,x,x1=0,x2=0,one,two,min,ans=0;
    scanf("%d",&n);
    for(i=0,one=0,two=0;i<n;i++)
    {
        scanf("%d",&a);
        if(i&&x!=a&&x==1)
        {
            one=i-x1;
            x2=i;
        }
        else if(i&&x!=a&&x==2)
        {
            two=i-x2;
            x1=i;
        }
        if(one&&two)
        {
            min=one<two?one:two;
            if(ans<min*2)
                ans=min*2;
            if(a==1)
                one=0;
            else
                two=0;
        }
        x=a;
    }
    if(one||two)
    {
        if(one)
            two=i-x2;
        else
            one=i-x1;
        min=one<two?one:two;
        if(ans<min*2)
            ans=min*2;
    }
    printf("%d\n",ans);
    return 0;
}
