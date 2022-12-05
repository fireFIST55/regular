#include<stdio.h>
#include<string.h>
int main(void)
{
    int max=0,i,n,freq[26]={0};
    scanf("%d",&n);
    char string[n+2];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        freq[string[i]-97]++;
        max=max<freq[string[i]-97]?freq[string[i]-97]:max;
    }
    if(max>1||strlen(string)==1)
        printf("%s\n","Yes");
    else
        printf("%s\n","No");
    return 0;
}
