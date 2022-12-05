#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[105],string1[105];
    int i,j,x;
    scanf("%s %s",string,string1);
    if(strlen(string)==strlen(string1))
    {
        for(i=0,x=0;string[i]!='\0';i++)
        {
            if(string[i]!=string1[i])
            {
                printf("%d\n",1);
                x++;
                break;
            }
        }
        if(x==0)
            printf("%s\n",string);
    }
    else
        printf("%d\n",1);
    return 0;
}
