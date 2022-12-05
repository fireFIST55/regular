#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,t,n,m,remainder_n,remainder_m;
    long int y;
    scanf("%d %d",&n,&m);
    char string[n][101],string1[m][101];
    for(i=0;i<n;i++)
    {
        scanf("%s",string[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%s",string1[i]);
    }
    scanf("%d",&t);
    char answers[t][202];
    for(i=0;i<t;i++)
    {
        scanf("%ld",&y);
        remainder_n=y%n;
        remainder_m=y%m;
        if(remainder_n==0)
        {
            remainder_n=n;
        }
        if(remainder_m==0)
        {
            remainder_m=m;
        }
        strcpy(answers[i],string[remainder_n-1]);
        strcat(answers[i],string1[remainder_m-1]);
    }
    for(i=0;i<t;i++)
    {
        printf("%s\n",answers[i]);
    }
    return 0;
}
