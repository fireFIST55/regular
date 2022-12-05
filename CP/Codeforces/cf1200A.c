#include<stdio.h>
int main(void)
{
    int i,j,n,num;
    scanf("%d",&n);
    char string[n+1],string1[11]="0000000000";
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='R')
        {
            for(j=10;j>=0;j--)
            {
                if(string1[j]=='0')
                {
                    string1[j]='1';
                    break;
                }
            }
        }
        else if(string[i]=='L')
        {
            for(j=0;j<11;j++)
            {
                if(string1[j]=='0')
                {
                    string1[j]='1';
                    break;
                }
            }
        }
        else
        {
            num=string[i]-48;
            string1[num]='0';
        }
    }
    printf("%s\n",string1);
    return 0;
}
