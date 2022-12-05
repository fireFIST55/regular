#include<stdio.h>
int main(void)
{
    int i,one=0,zero=0,n,min;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='1')
            one++;
        else
            zero++;
    }
    min=one<zero?one:zero;
    printf("%d\n",n-min*2);
    return 0;
}
