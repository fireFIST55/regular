#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,one,zero,x,t;
    scanf("%d",&t);
    int answer[t];
    char string[103];
    for(i=0;i<t;i++)
    {
        scanf("%s",string);
        for(j=0,one=0,zero=0;string[j]!='\0';j++)
        {
            if(string[j]=='1')
                one++;
            else
                zero++;
        }
        x=one<zero?one:zero;
        if(x%2==0)
            answer[i]=0;
        else
            answer[i]=1;
    }
    for(i=0;i<t;i++)
    {
        if(answer[i]==1)
            printf("DA\n");
        else
            printf("NET\n");
    }
    return 0;
}
