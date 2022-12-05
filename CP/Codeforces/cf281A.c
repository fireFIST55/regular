#include<stdio.h>
int main(void)
{
    char s[50];
    int i,total=0,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%c",&s[i]);
    }
    s[i]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
        {
            total++;
        }
    }
    printf("%d",total);
}
