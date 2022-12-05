#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,count;
    char string[13];
    scanf("%s",string);
    for(i=0;string[i]!='\0';)
    {
        if(string[i]=='1')
        {
            count=0;
            i++;
            while(string[i]=='4')
            {
                if(string[i]=='4')
                {
                    count++;
                    i++;
                }
                else
                {
                    printf("NO\n");
                    exit(0);
                }
            }
            if(count>2)
            {
                printf("NO\n");
                exit(0);
            }
        }
        else
        {
            printf("NO\n");
            exit(0);
        }
    }
    printf("YES\n");
    return 0;
}
