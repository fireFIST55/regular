#include<stdio.h>
int main(void)
{
    int i,j,k,n,dif,max,min,last=1000;
    scanf("%d",&n);
    int base[n],ans1,ans2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&base[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i+1==n)
        {
            j=0;
            k=i;
        }
        else
        {
            j=i+1;
            k=i;
        }
        max=base[j]>base[k]?base[j]:base[k];
        min=base[j]<base[k]?base[j]:base[k];
        dif=max-min;
        if(dif<last)
        {
            ans1=j+1;
            ans2=k+1;
            last=dif;
        }
        if(dif==0)
            break;
    }
    printf("%d %d\n",ans1,ans2);
    return 0;
}
