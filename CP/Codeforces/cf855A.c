#include<stdio.h>
int main(void)
{
    int i,j,k=0,x=1,n;
    scanf("%d",&n);
    int answers[n];
    char string[n][101];
    for(i=0;i<n;i++)
    {
        scanf("%s",string[i]);
        for(j=0;j<i;j++)
        {
            for(k=0,x=0;string[j][k]!='\0'||string[i][k]!='\0';k++)
            {
                if(string[i][k]!=string[j][k])
                {
                    x++;
                    break;
                }
            }
            if(x==0)
            {
                answers[i]=1;
                break;
            }
        }
        if(x!=0)
            answers[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(answers[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
