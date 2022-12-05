#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    int n,i,j,length;
    scanf("%d",&n);
    char string[100][100];
    if(n>=1&&n<=100)
    {
        for(i=0;i<n;i++)
        {
            scanf("%s",string[i]);
            for(j=0;j<(strlen(string[i]))&&j<100;j++)
            {
                string[i][j]=tolower(string[i][j]);
            }
            if((length=strlen(string[i]))>10)
            {
                printf("%c%d%c\n",string[i][0],length-2,string[i][length-1]);
            }
            else
            {
                printf(string[i]);
                printf("\n");
            }
        }
    }
}
