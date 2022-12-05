#include<stdio.h>
int main(void)
{
    int i,j,k,t,x,count;
    scanf("%d",&t);
    int answers[t];
    char string[101];
    for(i=0;i<t;i++)
    {
        scanf("%d",&k);
        scanf("%s",string);
        for(j=0;string[j]!='\0';j++)
        {
            if(string[j]=='A')
            {
                break;
            }
        }
        for(j,x=0,count=0;string[j]!='\0';j++)
        {
            if(string[j]=='P')
            {
                x++;
            }
            else
            {
                if(count<x)
                {
                    count=x;
                }
                x=0;
            }
        }
        if(x!=0)
        {
            if(count<x)
            {
                count=x;
            }
        }
        answers[i]=count;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
