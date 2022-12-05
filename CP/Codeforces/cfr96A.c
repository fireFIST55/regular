#include<stdio.h>
int main(void)
{
    int i,j,count;
    char string[105],ch;
    scanf("%s",string);
    for(i=0;string[i]!='\0';)
    {
        ch=string[i];
        for(j=i,count=0;string[j]!='\0',string[j]==ch;j++)
            count++;
        if(count>=7)
        {
            printf("YES\n");
            return 0;
        }
        else
            i=j;
    }
    printf("NO\n");
    return 0;
}
