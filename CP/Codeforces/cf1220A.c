#include<stdio.h>
int main(void)
{
    int i,n,one=0,zero=0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='n')
        {
            one++;
        }
        else if(string[i]=='z')
        {
            zero++;
        }
    }
    for(i=0;i<one;i++)
    {
        printf("1 ");
    }
    for(i=one;i<one+zero;i++)
    {
        printf("0 ");
    }
    return 0;
}
