#include<stdio.h>
int main(void)
{
    int i,num,count=0;
    char string[51];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||(string[i]>=48&&string[i]<=57)&&(string[i]-48)%2!=0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
