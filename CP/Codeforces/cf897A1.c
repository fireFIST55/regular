#include<stdio.h>
int main(void)
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    char string[n+1],operation[8];
    scanf("%s",string);
    for(i=0;i<m;i++)
    {
        scanf(" %[^\n]",operation);
        for(j=operation[0]-49;j<=operation[2]-49;j++)
        {
            if(operation[4]==string[j])
                string[j]=operation[6];
        }
    }
    printf("%s",string);
    return 0;
}
