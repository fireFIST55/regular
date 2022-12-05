#include<stdio.h>
int main(void)
{
    int i,dif,n,x,k,pos=0,neg=0;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        if(k>0)
            pos+=k;
        else
            neg+=k;
    }
    if(pos>(-1)*neg)
        dif=pos-(-1)*neg;
    else
        dif=(-1)*neg-pos;
    if(dif==0)
        printf("0");
    else if(dif<=x)
        printf("1");
    else if(dif%x==0)
        printf("%d\n",dif/x);
    else
        printf("%d\n",dif/x+1);
    return 0;
}
