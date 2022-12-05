#include<stdio.h>
int main(void)
{
    int i,n,m;
    scanf("%d %d",&n,&m);
    if(m%2==0||m%3==0&&m!=3||m%5==0&&m!=5||m%7==0&&m!=7)
    {
        printf("NO\n");
    }
    else
    {
        for(i=n+1;i<m;i++)
        {
            if((i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0)||i==3||i==5||i==7)
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
    return 0;
}
