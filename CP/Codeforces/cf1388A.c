#include<stdio.h>
int main(void)
{
    int i,j,t,n;
    scanf("%d",&t);
    int remaining,answer[t][4];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n>30)
        {
            remaining=n-10-14-6;
            if(remaining==10||remaining==14||remaining==6)
            {
                answer[i][0]=6;
                answer[i][1]=10;
                answer[i][2]=15;
                answer[i][3]=n-6-10-15;
            }
            else
            {
                answer[i][0]=6;
                answer[i][1]=10;
                answer[i][2]=14;
                answer[i][3]=n-6-10-14;
            }
        }
        else
            answer[i][0]=0;
    }
    for(i=0;i<t;i++)
    {
        if(answer[i][0]>0)
        {
            printf("YES\n");
            for(j=0;j<4;j++)
                printf("%d ",answer[i][j]);
            printf("\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
