#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[15],zero[4]="O-|",five[4]="-O|";
    scanf("%s",string);
    int i,j,digit,result,length=strlen(string);
    for(i=length-1;i>=0;i--)
    {
        digit=string[i]-48;
        if(digit>4)
            printf("%s",five);
        else
            printf("%s",zero);
        if(digit>4)
            result=digit-5;
        else if(digit==0)
            result=0;
        else
            result=digit;
        for(j=0;j<result;j++)
            printf("%c",'O');
        printf("%c",'-');
        for(j=0;j<4-result;j++)
            printf("%c",'O');
        printf("\n");
    }
    return 0;
}
