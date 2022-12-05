#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(void)
{
    int n,i,k,sub[26]={0};
    scanf("%d",&n);
    char string[105];
    scanf("%s",string);
    if(strlen(string)<26)
    {
        printf("NO");
    }
    else
    {
        for(i=0;string[i]!='\0';i++)
        {
            k=tolower(string[i]);
            sub[k-97]++;
        }
        for(i=0;i<26;i++)
        {
            if(sub[i]<1)
            {
                printf("NO");
                exit(0);
            }
        }
        printf("YES");
    }
    return 0;
}
