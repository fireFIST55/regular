#include<stdio.h>
int main(void)
{
    int i,j,t,a,b,c;
    scanf("%d",&t);
    int answer[t][4];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a!=b&&b!=c&&c!=a)
            answer[i][0]=0;
        else if(a==b&&b==c)
        {
            answer[i][0]=1;
            for(j=1;j<4;j++)
                answer[i][j]=a;
        }
        else if(a==b&&a>c)
        {
            answer[i][0]=1;
            answer[i][1]=a;
            answer[i][2]=c;
            answer[i][3]=1;
        }
        else if(b==c&&c>a)
        {
            answer[i][0]=1;
            answer[i][1]=b;
            answer[i][2]=a;
            answer[i][3]=1;
        }
        else if(c==a&&a>b)
        {
            answer[i][0]=1;
            answer[i][1]=a;
            answer[i][2]=b;
            answer[i][3]=1;
        }
        else
            answer[i][0]=0;
    }
    for(i=0;i<t;i++)
    {
        if(answer[i][0]==1)
        {
            printf("YES\n");
            for(j=1;j<4;j++)
                printf("%d ",answer[i][j]);
            printf("\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
