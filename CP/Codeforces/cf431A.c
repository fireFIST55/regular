#include<stdio.h>
int main(void)
{
    int array[4],i,sum=0,num;
    for(i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }
    char string[100000];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        sum+=array[string[i]-'1'];
    }
    printf("%d",sum);
    return 0;
}
