#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,k,t;
    scanf("%d",&t);
    char string[105],answers[t][105];
    for(i=0;i<t;i++)
    {
        scanf("%s",string);
        for(j=0,k=0;string[j]!='\0';j++,k++)
        {
            answers[i][k]=string[j];
            if(string[j]==string[j+1]&&(j+1)!=strlen(string)-1)
            {
                j++;
            }
        }
        answers[i][k]='\0';
    }
    for(i=0;i<t;i++)
    {
        printf("%s\n",answers[i]);
    }
    return 0;
}
