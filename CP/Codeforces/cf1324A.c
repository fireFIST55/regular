#include<stdio.h>
int main(void)
{
    int i,j,n,a,odd,even,t;
    scanf("%d",&t);
    int answer[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0,even=0,odd=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a%2==0)
                even++;
            else
                odd++;
        }
        if(even==n||odd==n)
            answer[i]=1;
        else
            answer[i]=0;
    }
    for(i=0;i<t;i++)
    {
        if(answer[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
