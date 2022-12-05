#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,n,eight=0,can,total,length;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    length=strlen(string);
    for(i=0;string[i];i++)
    {
        if(string[i]=='8')
            eight++;
    }
    can=length/11;
    total=can<eight?can:eight;
    printf("%d\n",total);
    return 0;
}
