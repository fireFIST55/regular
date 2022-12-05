#include<stdio.h>
int main(void)
{
    int t,i,j,n,even,odd;
    scanf("%d",&t);
    int array[40],answers[t];
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        for(i=0,even=0,odd=0;i<n;i++)
        {
            scanf("%d",&array[i]);
            if(i%2==0&&array[i]%2!=0)
            {
                odd++;
            }
            else if(i%2!=0&&array[i]%2==0)
            {
                even++;
            }
        }
        if(even==odd)
        {
            if((even+odd)%2==0)
            {
                answers[j]=(even+odd)/2;
            }
        }
        else if(even!=odd)
        {
            answers[j]=-1;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
