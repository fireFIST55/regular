#include<stdio.h>
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    char string[11],string1[7]="pgbory";
    for(i=0;i<n;i++)
    {
        scanf("%s",string);
        for(j=0;string1[j]!='\0';j++)
        {
            if(string[0]==string1[j])
            {
                string1[j]='0';
                break;
            }
        }
    }
    printf("%d\n",6-n);
    for(i=0;string1[i]!='\0';i++)
    {
        if(string1[i]=='p')
        {
            printf("Power\n");
        }
        else if(string1[i]=='g')
        {
            printf("Time\n");
        }
        else if(string1[i]=='b')
        {
            printf("Space\n");
        }
        else if(string1[i]=='o')
        {
            printf("Soul\n");
        }
        else if(string1[i]=='r')
        {
            printf("Reality\n");
        }
        else if(string1[i]=='y')
        {
            printf("Mind\n");
        }
    }
    return 0;
}
