#include<stdio.h>
int main(void)
{
    int i,j,x,max=0,min=0,n;
    scanf("%d",&n);
    int answers[n],freq[100][26]={0};
    char string[101];
    for(i=0;i<n;i++)
    {
        scanf("%s",string);
        for(j=0,max=0,min=26;string[j]!='\0';j++)
        {
            freq[i][string[j]-97]++;
            if(max<(string[j]-97))
            {
                max=string[j]-97;
            }
            if(min>(string[j]-97))
            {
                min=string[j]-97;
            }
        }
        for(j=min,x=0;j<=max;j++)
        {
            if(freq[i][j]>1||freq[i][j]==0)
            {
                x++;
                break;
            }
        }
        if(x>0)
        {
            answers[i]=0;
        }
        else
        {
            answers[i]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(answers[i]==1)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
