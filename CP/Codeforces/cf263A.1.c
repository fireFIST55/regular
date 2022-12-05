#include<stdio.h>
int main(void)
{
    char string[105];
    int i,freq[26]={0},count=0;
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        freq[string[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(freq[i]>=1)
        {
            count++;
        }
    }
    count%2?printf("IGNORE HIM!"):printf("CHAT WITH HER!");
    return 0;
}
