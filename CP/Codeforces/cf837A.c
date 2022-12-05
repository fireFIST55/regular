#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int i,count=0,count1=0,n;
    scanf("%d",&n);
    char string[n+1];
    scanf(" %[^\n]",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ')
        {
            if(count<count1)
                count=count1;
            count1=0;
        }
        if(isupper(string[i]))
            count1++;
    }
    if(count1!=0)
    {
        if(count<count1)
            count=count1;
    }
    printf("%d\n",count);
    return 0;
}
