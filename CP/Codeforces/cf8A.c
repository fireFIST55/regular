#include<stdio.h>
int main(void)
{
    int i,n,m;
    scanf("%d %d",&n,&m);
    if(m%2==0||m%3==0)
    {
        printf("NO\n");
    }
    else
    {
        for(i=n+1;i<m;i++)
        {
            if(i%2!=0&&i%3!=0)
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
    return 0;
}
