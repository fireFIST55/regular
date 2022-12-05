#include<stdio.h>
int main(void)
{
    int i,n,count=0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='R'&&string[i+1]=='U')
        {
            count++;
            i++;
        }
        else if(string[i]=='U'&&string[i+1]=='R')
        {
            count++;
            i++;
        }
        else
            count++;
    }
    printf("%d\n",count);
    return 0;
}
