#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[1005];
    int i,j,n,count=0;
    gets(string);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]>=97&&string[i]<=122)
        {
            for(j=i+1,n=0;j<strlen(string);j++)
            {
                if(string[i]==string[j]&&string[j]>=97&&string[j]<=122&&n==0)
                {
                    count++;
                    n++;
                    string[j]='0';
                }
                else if(string[i]==string[j]&&string[j]>=97&&string[j]<=122&&n>0)
                {
                    string[j]='0';
                }
            }
            if(n==0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}

