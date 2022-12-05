#include<stdio.h>
int main(void)
{
    char string[11];
    scanf("%s",string);
    int i,j,freq[26]={0},max=0;
    for(i=0;string[i]!='\0';i++)
    {
        freq[string[i]-97]++;
        if(max<string[i])
            max=string[i];
    }
    for(i=0;i<freq[max-97];i++)
    {
        printf("%c",max);
    }
    printf("\n");
    return 0;
}
