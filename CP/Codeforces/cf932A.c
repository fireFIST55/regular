#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[1005];
    scanf("%s",string);
    int i,length=strlen(string),limit;
    printf("%s",string);
    for(i=length-1;i>=0;i--)
    {
        printf("%c",string[i]);
    }
    return 0;
}
