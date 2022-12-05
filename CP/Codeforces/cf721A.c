#include<stdio.h>
int main(void)
{
    int i,x=0,y=0,k,count=0;
    scanf("%d",&k);
    int answers[k];
    char string[k+1];
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='B')
        {
            count++;
            x++;
        }
        else
        {
            if(count>0&&x!=0)
            {
                answers[y]=x;
                x=0;
                y++;
            }
        }
    }
    if(x!=0)
    {
        answers[y]=x;
        y++;
    }
    printf("%d\n",y);
    for(i=0;i<y;i++)
    {
        printf("%d ",answers[i]);
    }
}
