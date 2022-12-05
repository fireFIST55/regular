#include<stdio.h>
int main(void)
{
    int i,n,k,min=100000,freq[26]={0};
    scanf("%d %d",&n,&k);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        freq[string[i]-65]++;
    }
    for(i=0;i<k;i++)
    {
        min=min<freq[i]?min:freq[i];
    }
    printf("%d\n",min*k);
    return 0;
}
