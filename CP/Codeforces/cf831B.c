#include<stdio.h>
#include<string.h>
int main(void)
{
    char layout[27],layout1[27],typed[1001];
    scanf("%s",layout);
    scanf("%s",layout1);
    scanf("%s",typed);
    char answer[strlen(typed)+1];
    int i,j,k=0;
    for(i=0;typed[i]!='\0';i++)
    {
        if((typed[i]>=65&&typed[i]<=90)||(typed[i]>=97&&typed[i]<=122))
        {
            for(j=0;layout[j]!='\0';j++)
            {
                if(tolower(typed[i])==layout[j])
                {
                    if(isupper(typed[i]))
                        answer[k]=toupper(layout1[j]);
                    else
                        answer[k]=layout1[j];
                    k++;
                    break;
                }
            }
        }
        else
        {
            answer[k]=typed[i];
            k++;
        }
    }
    answer[k]='\0';
    printf("%s",answer);
    return 0;
}
