#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[101];
    int i,j,digit=0,upper=0,lower=0;
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(strlen(string)>=5)
        {
            if(string[i]>=48&&string[i]<=57)
                digit++;
            else if(string[i]>=65&&string[i]<=90)
                upper++;
            else if(string[i]>=97&&string[i]<=122)
                lower++;
        }
        else
        {
            printf("Too weak\n");
            return 0;
        }
    }
    if(digit>=1&&upper>=1&&lower>=1)
    {
        printf("Correct\n");
    }
    else
        printf("Too weak\n");
    return 0;
}
