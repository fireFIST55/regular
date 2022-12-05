#include<stdio.h>
int main(void)
{
    char string[12];
    scanf(" %[^\n]",string);
    int i=0,x;
    if(string[5]=='w')
    {
        x=string[0]-48;
        if(x==5||x==6)
            printf("%d\n",53);
        else
            printf("%d\n",52);
    }
    else
    {
        while(string[i]!=' ')
            i++;
        i-=1;
        if(i)
            x=(string[0]-48)*10+string[1]-48;
        else
            x=string[0]-48;
        if(x<=29)
            printf("%d\n",12);
        else if(x<31)
            printf("%d\n",11);
        else
            printf("%d\n",7);
    }
    return 0;
}
