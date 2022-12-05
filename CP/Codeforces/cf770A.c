#include<stdio.h>
int main(void)
{
    int i,j,n,k;
    scanf("%d %d",&n,&k);
    char string[n+1];
    for(i=0,j=97;i<n;i++,j++)
    {
        if(i%k==0)
            j=97;
        string[i]=j;
    }
    string[i]='\0';
    printf("%s",string);
    return 0;
}
