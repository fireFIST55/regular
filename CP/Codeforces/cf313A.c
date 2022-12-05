#include<stdio.h>
#include<string.h>
int main(void)
{
    char string[20],answer[20],ch;
    scanf("%s",string);
    int i,j=0,freq[11]={0};
    if(string[0]!='-')
        printf("%s",string);
    else if(strlen(string)<=2&&string[0]=='-')
        printf("%d\n",0);
    else if(strlen(string)>2&&string[0]=='-')
    {
        ch=string[strlen(string)-1]>string[strlen(string)-2]?string[strlen(string)-1]:string[strlen(string)-2];
        if(string[strlen(string)-1]==ch)
            string[strlen(string)-1]='+';
        else
            string[strlen(string)-2]='+';
        for(i=0;string[i]!='\0';i++)
        {
            if(string[i]!='+')
            {
                if(j<=1&&string[i]!='0')
                {
                    answer[j]=string[i];
                    j++;
                }
                else if(j>1)
                {
                    answer[j]=string[i];
                    j++;
                }
            }
        }
        answer[j]='\0';
        if(strlen(answer)==1)
            printf("%d\n",0);
        else
            printf("%s\n",answer);
    }
    return 0;
}
