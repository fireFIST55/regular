#include<stdio.h>
int main(void)
{
    int i,j,count=0,n;
    scanf("%d",&n);
    char string[n][n+1],a,b,c,d;
    for(i=0;i<n;i++)
    {
        scanf("%s",string[i]);
    }
    if(n<3)
        printf("%d\n",0);
    else
    {
        for(i=1;i<n-1;i++)
        {
            for(j=1;j<n-1;j++)
            {
                if(string[i][j]=='X'&&string[i-1][j-1]=='X'&&string[i-1][j+1]=='X'&&string[i+1][j-1]=='X'&&string[i+1][j+1]=='X')
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
