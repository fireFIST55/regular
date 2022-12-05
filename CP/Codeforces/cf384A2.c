#include<stdio.h>
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    char string[n+1],string1[n+1];
    if(n%2==0)
        printf("%d\n",n*(n/2));
    else
        printf("%d\n",(n/2+1)*(n/2+1)+(n/2)*(n/2));
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            string[i]='C';
        else
            string[i]='.';
    }
    string[i]='\0';
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            string1[i]='.';
        else
            string1[i]='C';
    }
    string1[i]='\0';
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            printf("%s",string);
        else
            printf("%s",string1);
        printf("\n");
    }
    return 0;
}
