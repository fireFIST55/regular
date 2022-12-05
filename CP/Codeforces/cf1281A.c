#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,t,length;
    scanf("%d",&t);
    char string[1001],answers[t][2];
    for(i=0;i<t;i++)
    {
        scanf("%s",string);
        length=strlen(string);
        if(string[length-2]=='p')
        {
            answers[i][0]='f';
        }
        else if(string[length-4]=='d'||string[length-4]=='m')
        {
            answers[i][0]='j';
        }
        else
        {
            answers[i][0]='k';
        }
    }
    for(i=0;i<t;i++)
    {
        if(answers[i][0]=='j')
        {
            printf("JAPANESE\n");
        }
        else if(answers[i][0]=='f')
        {
            printf("FILIPINO\n");
        }
        else
        {
            printf("KOREAN\n");
        }
    }
    return 0;
}
