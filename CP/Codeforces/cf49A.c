#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    int i,j;
    char string[105],ch;
    scanf("%[^\n]",string);
    for(i=strlen(string)-1;i>=0;i--)
    {
        if((string[i]>=65&&string[i]<=90)||(string[i]>=97&&string[i]<=122))
        {
            ch=tolower(string[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
                printf("YES\n");
            else
                printf("NO\n");
            break;
        }
    }
    return 0;
}
