#include<stdio.h>
int main(void)
{
    int i,j,n,t;
    scanf("%d",&t);
    int answers[t][1000],index[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&index[i]);
        for(j=0;j<index[i];j++)
            answers[i][j]=1;
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<index[i];j++)
            printf("%d ",answers[i][j]);
        printf("\n");
    }
    return 0;
}
