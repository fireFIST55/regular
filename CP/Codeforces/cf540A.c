#include<stdio.h>
int main(void)
{
    int n,min,max,sum=0;
    scanf("%d",&n);
    int i,dif;
    char pw[10005],mt[1005];
    scanf("%s",pw);
    scanf("%s",mt);
    for(i=0;i<n;i++)
    {
        min=mt[i]<pw[i]?mt[i]:pw[i];
        max=mt[i]>pw[i]?mt[i]:pw[i];
        dif=max-min;
        if(dif>5)
        {
            sum+=(10+min-max);
        }
        else
        {
            sum+=dif;
        }
    }
    printf("%d",sum);
    return 0;
}
