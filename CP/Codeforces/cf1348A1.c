#include<stdio.h>
#include<math.h>
int main(void)
{
    int t,i,n,k,s=0;
    scanf("%d",&t);
    int array[t],answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<t;i++)
    {
        s=0;
        for(k=1;k<=array[i]/2;k++)
        {
            s+=pow(2,k);
        }
        answers[i]=s;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
