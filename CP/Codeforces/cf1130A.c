#include<stdio.h>
int main(void)
{
    int i,n,a,pos=0,neg=0,half;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>0)
            pos++;
        else if(a<0)
            neg++;
    }
    if(n%2==0)
        half=n/2;
    else
        half=n/2+1;
    if((pos==neg&&pos<half)||(pos>neg&&pos<half)||(neg>pos&&neg<half))
        printf("%d\n",0);
    else if((pos==neg&&pos>=half)||(pos>neg&&pos>=half))
        printf("%d\n",1);
    else if(neg>pos&&neg>=half)
        printf("%d\n",-1);
    return 0;
}
