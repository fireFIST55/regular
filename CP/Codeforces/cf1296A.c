#include<stdio.h>
int main(void)
{
    int i,j,t,n,array[2005],even,odd;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0,even=0,odd=0;j<n;j++)
        {
            scanf("%d",&array[j]);
            if(array[j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==0||odd%2==0&&even==0)
        {
            answers[i]=0;
        }
        else
        {
            answers[i]=1;
        }
    }
    for(i=0;i<t;i++)
    {
        if(answers[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
