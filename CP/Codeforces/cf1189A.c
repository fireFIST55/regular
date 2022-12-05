#include<stdio.h>
int main(void)
{
    int i,j,n,k=0,zero=0,one=0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='0')
            zero++;
        else
            one++;
    }
    if(one!=zero)
    {
        printf("%d\n",1);
        printf(string);
    }
    else
    {
        printf("2\n");
        printf("%c ",string[0]);
        for(i=1;string[i]!='\0';i++)
            printf("%c",string[i]);
    }
    return 0;
}
