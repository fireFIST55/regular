#include<stdio.h>
int main(void)
{
    int l=0,r=0,n,i;
    scanf("%d",&n);
    char string[n+5];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='L')
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    printf("%d\n",l+r+1);
    return 0;
}
