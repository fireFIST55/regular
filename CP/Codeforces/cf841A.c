#include<stdio.h>
int main(void)
{
    int i,m=0,n,k,freq[26]={0};
    scanf("%d %d",&n,&k);
    int pos[n];
    char string[n+2];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(!freq[string[i]-97])
        {
            pos[m]=string[i]-97;
            m++;
        }
        freq[string[i]-97]++;
    }
    for(i=0;i<m;i++)
    {
        if(freq[pos[i]]>k)
        {
            n=1;
            break;
        }
        else
            n=0;
    }
    if(n)
        printf("%s\n","NO");
    else
        printf("%s\n","YES");
    return 0;
}
