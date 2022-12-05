#include<stdio.h>
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    char string[n+1],string1[n+1];
    scanf("%s",string);
    for(i=0,j=0;string[j]!='\0';i++,j+=i)
    {
        string1[i]=string[j];
    }
    string1[i]='\0';
    printf(string1);
    return 0;
}
