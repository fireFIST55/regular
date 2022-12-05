#include<stdio.h>
int main(void)
{
    char string[20],a[20];
    gets(string);
    int i,count=0,k=0;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='4'||string[i]=='7')
        {
            count++;
        }
    }
    if(count==4||count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
