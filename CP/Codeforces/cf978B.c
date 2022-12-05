#include<stdio.h>
int main(void)
{
    int i,n,count=0,total=0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='x')
        {
            count++;
        }
        else
        {
            if(count>=3)
            {
                total+=count-2;
            }
            count=0;
        }
    }
    if(count>=3)
    {
        total+=count-2;
    }
    printf("%d\n",total);
    return 0;
}
