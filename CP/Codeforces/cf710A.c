#include<stdio.h>
int main(void)
{
    char string[3];
    scanf("%s",string);
    int count=0,num=string[1]-48;
    if(string[0]>'a'&&string[0]<'h'&&num>1&&num<8)
        count=8;
    else if(string[0]>'a'&&string[0]<'h'&&(num==1||num==8))
        count=5;
    else if((string[0]=='a'||string[0]=='h')&&(num==1||num==8))
        count=3;
    else
        count=5;
    printf("%d\n",count);
    return 0;
}
