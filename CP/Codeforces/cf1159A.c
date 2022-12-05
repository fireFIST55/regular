#include<stdio.h>
int main(void)
{
    int i,n,stones=0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(stones>0)
        {
            if(string[i]=='-')
                stones--;
            else
                stones++;
        }
        else if(stones==0)
        {
            if(string[i]=='+')
                stones++;
        }
    }
    printf("%d\n",stones);
    return 0;
}
