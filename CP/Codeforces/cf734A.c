#include<stdio.h>
int main(void)
{
    long int n,a=0,d=0,i;
    scanf("%ld",&n);
    char s[100007];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='D')
        {
            d++;
        }
        else if(s[i]=='A')
        {
            a++;
        }
    }
    if(d>a)
    {
        printf("Danik");
    }
    else if(a>d)
    {
        printf("Anton");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
