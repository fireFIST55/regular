#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    char string[2][100];
    int i,j,length;
    for(i=0;i<2;i++)
    {
        scanf("%s",string[i]);
        for(j=0;j<strlen(string[i])&&j<100;j++)
        {
            string[i][j]=tolower(string[i][j]);
        }
    }
    if(strcmp(string[0],string[1])>0)
    {
        printf("1");
    }
    else if(strcmp(string[0],string[1])<0)
    {
        printf("-1");
    }
    else if(!strcmp(string[0],string[1]))
    {
        printf("0");
    }
    return 0;
}
