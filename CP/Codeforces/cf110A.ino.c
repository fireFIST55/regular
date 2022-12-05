#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int i,count=0;
    char string[80],a[80];
    gets(string);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]=='4'||string[i]=='7')
        {
            count++;
        }
    }
    itoa(count,a,10);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='4'||a[i]=='7')
        {
            printf("YES");
        }
        else if(a[i]!='4'&&a[i]!='7')
        {
            printf("NO");
            exit(0);
        }
    }
}
