#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[1005],answer[6]="heidi";
    scanf("%s",string);
    int i,j=0;
    if((strlen(string))<=5)
        printf("NO\n");
    else
    {
        for(i=0;string[i]!='\0';i++)
        {
            if(answer[j]==string[i])
            {
                j++;
            }
        }
        sub[j]='\0';
        if(j==5)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
