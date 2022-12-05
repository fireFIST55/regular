#include<stdio.h>
int main(void)
{
    int i;
    char string[105];
    scanf("%s",string);
        for(i=0;string[i]!='\0';i++)
        {
            if(string[i]=='H'||string[i]=='Q'||string[i]=='9')
            {
                printf("YES\n");
                return 0;
            }
        }
        printf("NO\n");
    return 0;
}
