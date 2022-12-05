#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,x,n,t,length;
    scanf("%d",&t);
    char string[101];
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%s",string);
        length=strlen(string);
        if(length<11||length==11&&string[0]!='8')
        {
            answers[i]=0;
        }
        else if(length>=11&&string[0]=='8')
        {
            answers[i]=1;
        }
        else
        {
            for(j=0;string[j]!='\0';j++)
            {
                if(string[j]=='8')
                {
                    x=j;
                    break;
                }
                else
                {
                    x=0;
                }
            }
            if(length-x>=11&&x!=0)
            {
                answers[i]=1;
            }
            else
            {
                answers[i]=0;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(answers[i]==0)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}
