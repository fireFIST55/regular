#include<stdio.h>
int main(void)
{
    int i,count=0;
    char string[51];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a')
        {
            count++;
        }
    }
    if(count>i/2)
    {
        printf("%d\n",i);
    }
    else
    {
        printf("%d\n",count+count-1);
    }
    return 0;
}
