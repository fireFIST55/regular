#include<stdio.h>
int main(void)
{
    char string[1005],answer[1005];
    int i,j;
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='.')
        {
            if(string[i-1]<'9')
            {
                for(j=0;j<i-1;j++)
                    answer[j]=string[j];
                if(string[i+1]<'5')
                    answer[j]=string[j];
                else
                    answer[j]=string[j]+1;
                answer[j+1]='\0';
                printf("%s\n",answer);
            }
            else
                printf("GOTO Vasilisa.\n");
            break;
        }
    }
    return 0;
}
