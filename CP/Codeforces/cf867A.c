#include<stdio.h>
int main(void)
{
    int i,n,f=0,s=0;
    scanf("%d",&n);
    char string[n+1];
    scanf("%s",string);
    for(i=0;string[i]!=0;i++)
    {
        if(string[i]=='F'&&string[i+1]=='S')
        {
            f++;
        }
        else if(string[i]=='S'&&string[i+1]=='F')
        {
            s++;
        }
    }
    if(s>f)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
