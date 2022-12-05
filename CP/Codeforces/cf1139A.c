#include<stdio.h>
int main(void)
{
    int i,j,num,count=0,n;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        num=string[i]-48;
        if(num%2==0)
        {
            count+=i+1;
        }
    }
    printf("%d\n",count);
    return 0;
}
