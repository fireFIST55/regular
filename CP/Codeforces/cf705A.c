#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    char string[10000]="I love ",string1[10000]="I hate ",temp[10000];
    strcpy(temp,string1);
    if(n==1)
    {
        printf("I hate it");
        exit(0);
    }
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            strcat(temp,"it");
        }
        else if(i%2==0)
        {
            strcat(temp,"that ");
            strcat(temp,string1);
        }
        else if(i%2!=0)
        {
            strcat(temp,"that ");
            strcat(temp,string);
        }
    }
    printf(temp);
    return 0;
}
