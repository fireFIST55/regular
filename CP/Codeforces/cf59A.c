#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char string[105];
    int i,j,upper=0,lower=0;
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        if(isupper(string[i])>0)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if(upper>lower)
    {
        for(i=0;string[i]!='\0';i++)
        {
            string[i]=toupper(string[i]);
        }
    }
    else
    {
        for(i=0;string[i]!='\0';i++)
        {
            string[i]=tolower(string[i]);
        }
    }
    printf(string);
    return 0;
}
