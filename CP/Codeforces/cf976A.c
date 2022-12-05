#include<stdio.h>
int main(void)
{
    int i,j,one=0,zero=0,n;
    scanf("%d",&n);
    char string[n+1],sub[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='1')
            one++;
        else
            zero++;
    }
    if(one>0)
    {
        sub[0]='1';
        for(i=1;i<=zero;i++)
            sub[i]='0';
        sub[i]='\0';
    }
    else
    {
        sub[0]='0';
        sub[1]='\0';
    }
    printf("%s\n",sub);
    return 0;
}
