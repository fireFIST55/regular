#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int freq_t[26]={0},freq_n[26]={0},i,j;
    char string[3][105];
    for(i=0;i<3;i++)
    {
        scanf("%s",string[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<strlen(string[i]);j++)
        {
            if(i<2)
            {
                freq_t[string[i][j]-65]++;
            }
            else
            {
                freq_n[string[i][j]-65]++;
            }
        }
    }
    for(i=0;i<26;i++)
    {
        if(freq_t[i]!=freq_n[i])
        {
            printf("NO");
            exit(0);
        }
    }
    printf("YES");
    return 0;
}
