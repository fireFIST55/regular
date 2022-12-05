#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[105],t[105],a[105];
    gets(s);
    gets(t);
    int i,j;
    for(i=0,j=strlen(t)-1;j>=0;i++,j--)
    {
        a[i]=t[j];
    }
    a[i]='\0';
    if(!strcmp(s,a))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
