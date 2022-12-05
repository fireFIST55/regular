#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i;
    char a[3],b[3];
    scanf("%c %c",&a[0],&b[0]);
    if(a[0]==b[0])
    {
        a[1]='0';
        b[1]='1';
        a[2]='\0';
    }
    else if((a[0]-48)+1==(b[0]-48))
    {
        a[1]='9';
        b[1]='0';
        a[2]='\0';
    }
    else if(a[0]=='9'&&b[0]=='1')
    {
        a[1]='\0';
        b[1]='0';
    }
    else
    {
        printf("%d\n",-1);
        exit(0);
    }
    b[2]='\0';
    printf("%s %s\n",a,b);
    return 0;
}
