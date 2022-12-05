#include<stdio.h>
int main(void)
{
    int i,j,k,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        char string[n+3],answer[n+3];
        scanf("%s",string);
        for(j=0,k=0;string[j]!='\0';j++)
        {
            if((string[j]-48)&1)
            {
                answer[k]=string[j];
                k++;
            }
            if(k==2)
                break;
        }
        if(k<2)
            printf("%d\n",-1);
        else
        {
            answer[k]='\0';
            printf("%s\n",answer);
        }
    }
    return 0;
}
